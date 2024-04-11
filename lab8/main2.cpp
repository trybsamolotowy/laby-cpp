#include <iostream>

using namespace std;

class point{

private:

double x, y, z;

public:

point(double a, double b, double c): x(a), y(b), z(c) {}

void display_point(){
    cout << "X: " << x << " Y: " << y<< " Z: " << z << endl;}
};


int main(){


    point point1(1.4,2.3,3.66);
    point1.display_point();

}
