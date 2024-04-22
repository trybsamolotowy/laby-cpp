#include <iostream>

using namespace std;

class Punkt{

private:

    float x, y;

public:

    
    void set_punkt(float a, float b){
        x = a;
        y = b;
    }

    void wyswietl(){

        cout << "Punkt x to: " << x << endl;
        cout << "Punkt y to: " << y << endl;

    }

};
int main(){

Punkt punkt;

punkt.set_punkt(1, 3);

cout << "Wyswietlenie punktu 2: " << endl;

punkt.wyswietl();

Punkt *punkt2 = new Punkt;

punkt2->set_punkt(5, 7);

cout << "Wyswietlenie punktu 2: " << endl;

punkt2->wyswietl();

}