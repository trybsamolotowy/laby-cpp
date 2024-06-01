#include <iostream>
#include <string>

using namespace std;

class person{

private:

string name, adress;
int age;

public:


};

class student : public person{

private:

int student_id;

public:

student(string name, int age, int student_id, string adress):person(name, age, adress), student_id(student_id){}
};

int main(){

    return 0;
}