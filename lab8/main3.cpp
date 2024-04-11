#include <iostream>

using namespace std;


class point{

public:

    double x, y, z;
    point(double a, double b, double c): x(a), y(b), z(c){}

    void display_point(){
        cout << "Point: " << "X: " << x << " Y: " << y<< " Z: " << z << endl;
    }
};


class vector{

public:

    double x, y, z;
   
   vector(point s, point k){

    x = k.x - s.x;
    y = k.y - s.y;
    z = k.z - s.z;

   }
    void display_vector(){
        cout << "Vector: " << x << " " << y << " " << z << endl;
    }

};
int main(){

    point point1(1.4,2.3,3.66);
    point point2(3.4,5.2,2);
    vector vector1(point1,point2);

    vector1.display_vector();

    
}