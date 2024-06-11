#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
#include <limits>

using namespace std;

struct Character {
    string name;
    int strength;
    int speed;
    int agility;
    int experience;
    int level;
    int wins;
    int losses;
};

vector<Character> loadAllCharacters() {
    vector<Character> characters;
    ifstream myfile("data.txt");
    string line;
    while (getline(myfile, line)) {
        Character character;
        character.name = line;
        myfile >> character.strength >> character.speed >> character.agility >> character.experience >> character.level >> character.wins >> character.losses;
        myfile.ignore();
        characters.push_back(character);
    }
    return characters;
}

void saveCharacter(Character character) {
    ofstream myfile("data.txt", ios::app);
    myfile << character.name << endl;
    myfile << character.strength << " " << character.speed << " " << character.agility << " " << character.experience << " " << character.level << " " << character.wins << " " << character.losses << endl;
}

void updateCharacter(Character character) {
    vector<Character> characters = loadAllCharacters();
    ofstream myfile("data.txt");
    for (auto& c : characters) {
        if (c.name == character.name) {
            c = character;
        }
        myfile << c.name << endl;
        myfile << c.strength << " " << c.speed << " " << c.agility << " " << c.experience << " " << c.level << " " << c.wins << " " << c.losses << endl;
    }
}

bool characterExists(string name) {
    ifstream myfile("data.txt");
    string line;
    while (getline(myfile, line)) {
        if (line == name) {
            return true;
        }
        myfile.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return false;
}

void createNewCharacter(Character* character, int points) {
    cout << "What's the name of your character? " << endl;
    cin.ignore();
    getline(cin, character->name);

    while (characterExists(character->name)) {
        cout << "Character with this name already exists. Please enter a different name: " << endl;
        getline(cin, character->name);
    }

    int remaining_points = points;
    int strength_points = 0;
    int speed_points = 0;
    bool valid_input;

    auto getValidInput = [](int maxPoints) {
        int input;
        while (true) {
            cin >> input;
            if (cin.fail() || input < 0 || input > maxPoints) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Enter a number between 0 and " << maxPoints << ": ";
            } else {
                return input;
            }
        }
    };

    do {
        valid_input = true;

        cout << "You have " << remaining_points << " points to distribute." << endl;
        cout << "Enter points for strength: ";
        strength_points = getValidInput(remaining_points);

        remaining_points -= strength_points;

        cout << "You have " << remaining_points << " points to distribute." << endl;
        cout << "Enter points for speed: ";
        speed_points = getValidInput(remaining_points);

        remaining_points -= speed_points;

        cout << "Remaining points will be assigned to agility." << endl;
        character->agility = remaining_points;

        character->strength = strength_points;
        character->speed = speed_points;
        character->experience = 0;
        character->level = 1;
        character->wins = 0;
        character->losses = 0;

    } while (!valid_input);

    saveCharacter(*character);
}

bool loadCharacter(Character* character, string name) {
    ifstream myfile("data.txt");
    string line;
    while (getline(myfile, line)) {
        if (line == name) {
            character->name = line;
            myfile >> character->strength >> character->speed >> character->agility >> character->experience >> character->level >> character->wins >> character->losses;
            return true;
        }
        myfile.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return false;
}

Character generateEnemy() {
    Character enemy;
    enemy.name = "Enemy";
    enemy.strength = rand() % 50 + 1;
    enemy.speed = rand() % 50 + 1;
    enemy.agility = rand() % 50 + 1;
    enemy.experience = rand() % 20;
    enemy.level = (rand() % 5) + 1;
    enemy.wins = 0;
    enemy.losses = 0;
    return enemy;
}

void levelUp(Character* character) {
    const int POINTS_PER_LEVEL = 10;
    if (character->experience >= character->level * 10) {
        character->level++;
        int remaining_points = POINTS_PER_LEVEL;
        int strength_points;
        int speed_points;
        int agility_points;
        bool valid_input;

        do {
            valid_input = true;
            cout << "Congratulations! You've reached level " << character->level << "!" << endl;
            cout << "You have " << remaining_points << " points to distribute." << endl;

            cout << "Enter points for strength: ";
            while (!(cin >> strength_points) || strength_points < 0 || strength_points > remaining_points) {
                cin.clear(); // Clear error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
                cout << "Invalid input. Enter a number between 0 and " << remaining_points << ": ";
            }
            character->strength += strength_points;
            remaining_points -= strength_points;

            if (remaining_points > 0) {
                cout << "You have " << remaining_points << " points to distribute." << endl;
                cout << "Enter points for speed: ";
                while (!(cin >> speed_points) || speed_points < 0 || speed_points > remaining_points) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Enter a number between 0 and " << remaining_points << ": ";
                }
                character->speed += speed_points;
                remaining_points -= speed_points;
            }

            if (remaining_points > 0) {
                cout << "You have " << remaining_points << " points to distribute." << endl;
                cout << "Enter points for agility: ";
                while (!(cin >> agility_points) || agility_points < 0 || agility_points > remaining_points) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Enter a number between 0 and " << remaining_points << ": ";
                }
                character->agility += agility_points;
                remaining_points -= agility_points;
            }

        } while (!valid_input);
    }
}


void fight(Character* character, Character* enemy) {
    int characterPoints = character->strength + character->speed + character->agility + (character->level * 2);
    int enemyPoints = enemy->strength + enemy->speed + enemy->agility + (enemy->level * 2);
    int outcome = characterPoints - enemyPoints + (rand() % 10 - 5);

    if (outcome > 0) {
        cout << "You won!" << endl;
        character->experience += 1;
        character->wins++;
    } else {
        cout << "You lost!" << endl;
        character->losses++;
    }

    levelUp(character);
    updateCharacter(*character);
}

void showCharacterStats(Character character) {
    cout << "Name: " << character.name << endl;
    cout << "Strength: " << character.strength << endl;
    cout << "Speed: " << character.speed << endl;
    cout << "Agility: " << character.agility << endl;
    cout << "Experience: " << character.experience << endl;
    cout << "Level: " << character.level << endl;
    cout << "Wins: " << character.wins << endl;
    cout << "Losses: " << character.losses << endl;
}

void mainMenu() {
    Character myCharacter;
    bool exit = false;

    while (!exit) {
        cout << "Menu:" << endl;
        cout << "1. Create new character" << endl;
        cout << "2. Load existing character" << endl;
        cout << "3. Exit game" << endl;

        int choice;
        bool valid_input = false;

        while (!valid_input) {
            cin >> choice;
            if (cin.fail() || choice < 1 || choice > 3) {
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                cout << "Invalid input. Please enter 1, 2, or 3: ";
            } else {
                valid_input = true;
            }
        }

        switch (choice) {
            case 1:
                createNewCharacter(&myCharacter, 100);
                break;
            case 2: {
                string characterName;
                cout << "Enter the name of the character to load: ";
                cin.ignore();
                getline(cin, characterName);

                if (loadCharacter(&myCharacter, characterName)) {
                    cout << "Character loaded successfully." << endl;
                    showCharacterStats(myCharacter);
                } else {
                    cout << "Character not found." << endl;
                }
                break;
            }
            case 3:
                exit = true;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        if (!exit) {
            bool stop = false;
            while (!stop) {
                Character enemy = generateEnemy();
                fight(&myCharacter, &enemy);

                char fightChoice;
                bool validInput = false;

                while (!validInput) {
                    cout << "Do you want to continue fighting? (y/n): ";
                    cin >> fightChoice;

                    if (fightChoice == 'n' || fightChoice == 'N') {
                        stop = true;
                        validInput = true;
                    } else if (fightChoice == 'y' || fightChoice == 'Y') {
                        stop = false;
                        validInput = true;
                    } else {
                        cout << "Invalid input. Please enter 'y' to continue fighting or 'n' to stop: ";
                    }
                }
            }
        }
    }
}


int main() {
    srand(time(NULL));
    mainMenu();
    return 0;
}
