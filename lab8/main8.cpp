#include <iostream>

using namespace std;

class vehicle{

private:

    string mark, model;
    int year;

public:

    vehicle(string mark, string model, int year): mark(mark), model(model), year(year){}

};

class car: public vehicle{

private:

    int num_doors;

public:

    car(string mark, string model, int year, int a) : vehicle(mark, model, year), num_doors(a){}
    
};

int main(){

    car car1("BMW", "X5", 2020, 5);
    cout << "Dane samochodu to: " << car1.mark << " " << car1.model << " " << car1.year << " " << car1.num_doors << endl;

}