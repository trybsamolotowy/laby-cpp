#include <iostream>
#include <cmath>

using namespace std;

class Wektor {

    private:

    float x,y,z;
    //float wsp[3]={x, y, z};

    public:

    Wektor(float zmienna1, float zmienna2, float zmienna3) : x(zmienna1), y(zmienna2), z(zmienna3) {}
   

    Wektor dodawanie(const Wektor &drugi_wektor)const{

        return Wektor(x+drugi_wektor.x,y+drugi_wektor.y,z+drugi_wektor.z);

    }

    Wektor odejmowanie(const Wektor &drugi_wektor)const{

        return Wektor(x-drugi_wektor.x,y-drugi_wektor.y,z-drugi_wektor.z);

    }

    Wektor mnożenie(int skalar){

        return Wektor(x*skalar,y*skalar,z*skalar);

    }

    Wektor dzielenie(int skalar){

        return Wektor(x/skalar,y/skalar,z/skalar);
    }

    float dlugosc_wektora() const {

        return sqrt(x * x + y * y + z * z);
    }

    void display(){
        
        cout << "x: " << x << " y: " << y << " z: "<< z;

    }

};

int main(){

    Wektor wektor1(2,2,2);
    Wektor wektor2(1,1,1);
    cout <<wektor1.dlugosc_wektora();
     
}