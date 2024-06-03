#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 

using namespace std;

struct Character {
    string name;
    int strength;
    int speed;
    int agility;
};

void createCharacter(Character* character, int points) {
    cout << "What's the name of your character? " << endl;
    getline(cin, character->name);

    int remaining_points;
    int strength_points;
    int speed_points;
    bool valid_input;

      do {
        remaining_points = points;
        valid_input = true;

        cout << "You have " << remaining_points << " points to distribute." << endl;
        cout << "Enter points for strength: ";
        cin >> strength_points;

        if (strength_points <= remaining_points) {
            character->strength = strength_points;
            remaining_points -= strength_points;
            cout << "Strength of " << character->name << " is: " << character->strength << endl;
        } else {
            cout << "You don't have enough points to distribute. Please start again." << endl;
            valid_input = false;
            continue;
        }

        cout << "You have " << remaining_points << " points to distribute." << endl;
        cout << "Enter points for speed: ";
        cin >> speed_points;

        if (speed_points <= remaining_points) {
            character->speed = speed_points;
            remaining_points -= speed_points;
            cout << "Speed of " << character->name << " is: " << character->speed << endl;
        } else {
            cout << "You don't have enough points to distribute. Please start again." << endl;
            valid_input = false;
            continue;
        }

        character->agility = remaining_points;
        cout << "Agility of " << character->name << " is: " << character->agility << endl;

    } while (!valid_input);
}

Character generateEnemy() {

    Character enemy;
    enemy.name = "Enemy";

    enemy.strength = rand() % 50 + 1; 
    enemy.speed = rand() % 50 + 1;   
    enemy.agility = rand() % 50 + 1;

    return enemy;
}

void fight(Character* character, Character* enemy){
    int win = 0;
    if(character->speed>enemy->speed){
        win++;
    }if(character->strength>enemy->strength){
        win++;
    }if(character->agility>enemy->agility){
        win++;
    }

    if(win >= 2){
        cout << "You won!" << endl;        
    }else{
        cout << "You lost!" << endl;
    }

}

int main() {

    srand(time(NULL)); 

    Character myCharacter;
    int points = 100; 
    createCharacter(&myCharacter, points);

    Character enemy = generateEnemy();

    cout << "Generated enemy:" << endl;
    cout << "Name: " << enemy.name << endl;
    cout << "Strength: " << enemy.strength << endl;
    cout << "Speed: " << enemy.speed << endl;
    cout << "Agility: " << enemy.agility << endl;

    fight(&myCharacter,&enemy);

    return 0;
}

