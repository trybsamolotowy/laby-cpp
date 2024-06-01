#include <iostream>

using namespace std;

class complex{

private:

    float a;
    float b;

public: 

    complex(float aa, float bb) : a(aa), b(bb) {}

    friend ostream& operator << (ostream& os, const complex& c1)
    {
        os << c1.a << " + " << c1.b << "i";
        return os;
    }

};


int main(){

    complex c1(3, 4);
    cout << c1 << endl;

    return 0;
}