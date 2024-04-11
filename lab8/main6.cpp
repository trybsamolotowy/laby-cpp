#include <iostream>

using namespace std;

class animal{

private:

    string name;
    int age;

public:

animal(string name_animal, int age_animal): name(name_animal), age(age_animal){}

};

class dog : animal{
    
    private:

    string breed;

    public:

    dog(string name_dog, int age_dog, string breed) : animal(name_dog, age_dog){

        breed = breed;
    }
};

int main(){

    return 0;
}