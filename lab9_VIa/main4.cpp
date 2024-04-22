#include <iostream>

using namespace std;

class Wektor{

private:

    float x, y, z;

public:

    void ustaw_wsp(int a, int b, int c){

        x = a;
        y = b;
        z = c;

        cout << "Wspolrzedne to (" << x << "," << y << "," << z << ")" << endl;
    }

    void usun_wsp(Wektor){

        cout << "Usuwanie wspolrzednych...";
        delete &x;
        delete &y;
        delete &z;
        cout << "Zakończono." << endl;
    }
};
int main(){

}