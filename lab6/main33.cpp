#include <iostream>
#include <cmath>

using namespace std;

class point{

private:

float x, y, z;

public:

point(float a, float b, float c) : x(a), y(b), z(c){}

// Destruktor

~point(){
    cout << "Destruktor zostal wywolany" << endl;
}

point operator-(const point& other) const {
    return point(this->x - other.x, this->y - other.y, this->z - other.z);
}

point operator+(const point& other) const {
    return point(this->x + other.x, this->y + other.y, this->z + other.z);
}

float distance(const point& other) const {
    return sqrt(pow(x - other.x, 2) + pow(y - other.y,2) + pow(z - other.z,2));
}
void display() const {
    cout << "Point(" << x << ", " << y << ", " << z << ")" << endl;
}

};

int main(){

point p1(1, 2, 3);
point p2(4, 5, 6);

cout << "Punkt 1: ";
p1.display();

cout << "Punkt 2: ";
p2.display();

point sum = p1 + p2;
cout << "suma: ";
sum.display();

point diff = p1 - p2;
cout << "roznica: ";
diff.display();

float distance = p1.distance(p2);
cout << "odleglosc: " << distance << endl;

}