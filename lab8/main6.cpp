#include <iostream>

using namespace std;

class animal {

private:
    string name;
    int age;

public:
    animal(string name_animal, int age_animal) : name(name_animal), age(age_animal) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

protected:
    // Dodajemy protected getter, aby klasa dog mogła uzyskać dostęp do name i age
    string getName() const { return name; }
    int getAge() const { return age; }
};

class dog : public animal {

private:
    string breed;

public:
    dog(string name_dog, int age_dog, string breed_dog) : animal(name_dog, age_dog), breed(breed_dog) {}

    void display() const {
        // Wywołanie metody display z klasy animal
        animal::display();
        cout << "Breed: " << breed << endl;
    }
};

int main() {

    dog d("Kajtek", 2, "kundel");
    d.display();

    return 0;
}
