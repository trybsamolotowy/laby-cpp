#include <iostream>

using namespace std;

/*

A copy constructor in programming, particularly in languages like C++ and Java, is a special type of 
constructor that is used to create a new object as a copy of an existing object. It's commonly used
 when you want to create a new object that has the same data as an existing object.

*/

class my_class {
  
    private:

    int value;

    public:

    // constructor
    my_class(int val) : value(val){}

    // copy constructor
    my_class(const my_class &obj){

    cout << "Copy constructor called!" << endl;

    value = obj.value;

    }

    void display(){

        cout << "Value: " << value << endl;

    }
};


int main(){

    my_class obj1(4);

    my_class obj2 = obj1;

    cout << "Object1: " << endl;
    obj1.display();

    cout << "Object2: " << endl;
    obj2.display();


}