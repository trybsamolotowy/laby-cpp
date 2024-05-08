#include <iostream>
#include <cmath>

using namespace std;

class punkt{

private:

    float x, y;

public:

    constexpr punkt(float x, float y): x(x), y(y){}
    
    constexpr int wartosc_x () const {return x;}
    
    constexpr int wartosc_y () const {return y;}
};

    constexpr punkt punkt1(3,4);

    constexpr float odleglosc_od_0 = sqrt((0-punkt1.wartosc_x())*(0-punkt1.wartosc_x())+(0-punkt1.wartosc_y())*(0-punkt1.wartosc_y()));

int main(){

   
    cout << "Odleglosc od (0,0): " <<  odleglosc_od_0 << endl;

    

    return 0;

}