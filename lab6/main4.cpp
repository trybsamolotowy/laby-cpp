#include <iostream>

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



    void display(){
        
        cout << "x: " << x << " y: " << y << " z: "<< z;

    }

};

int main(){

    Wektor wektor1(2,2,2);
    Wektor wektor2(1,1,1);
    Wektor wektor3 = wektor1.dodawanie(wektor2);
    wektor3.display();

    


}