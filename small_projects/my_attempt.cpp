#include <iostream>


using namespace std;

class person{

    private:

    int age;

    public:

    person(int age_per) : age(age_per){}

    person(const person &obj){

        cout << "Copying constructor was called" << endl;
        age = obj.age;
    }

    void display(){

        cout << "Age of the person is: " << age << endl;

    }

};


int main(){

    person John(21);

    person Anna = John;

    cout << "John: " << endl;
    John.display();
    cout << "Anna: " << endl;
    Anna.display();

    return 0;

}