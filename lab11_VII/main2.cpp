#include <iostream>

using namespace std;

class obrazek{

private:

    int dane_obrazka;

public:

    obrazek(int dane) : dane_obrazka(dane) {}

    // konstruktor przenoszący
    obrazek(obrazek&& inny_obrazek) noexcept {

        this -> dane_obrazka = inny_obrazek.dane_obrazka;

    }

    void wyswietl(){
        cout << dane_obrazka << endl;
    }

};
int main(){

    obrazek obrazek1(123);
    obrazek obrazek2(231);
    obrazek obrazek3 = move(obrazek1);

    obrazek1.wyswietl();
    obrazek2.wyswietl();
    obrazek3.wyswietl();


    return 0;

}