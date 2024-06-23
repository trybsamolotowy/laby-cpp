/*
Pytanie 3
Napisz klasę pierwotną Samochod, która posiada:

Prywatne pola typu string: marka, model, oraz int rocznik.
Publiczny konstruktor z parametrami do inicjalizacji odpowiednich pól.
Publiczną metodę getMarka() zwracającą wartość pola marka.
Funkcję operator <<, która zapisuje stan obiektu klasy Samochod do strumienia wyjściowego.
Funkcję operator >>, która wczytuje stan obiektu klasy Samochod ze strumienia wejściowego.
UWAGA: Należy zawrzeć cały kod klasy w jednym pliku. Może być potrzebne dodanie publicznego konstruktora domyślnego.
*/

#include <iostream>
#include <fstream>

using namespace std;

class Samochod{
private:

    string marka, model;
    int rocznik;

public:

    Samochod(string m, string mo, int r):marka(m), model(mo), rocznik(r){}
    Samochod():marka(" "), model(" "), rocznik(0){} // konstruktor domyślny
    string getMarka(){
        return marka;
    }
    
    friend ostream& operator<<(ostream& os, const Samochod& obj) {
        cout << "What do you want to write? 1. marka, 2. model, 3. rocznik?" << endl;
        int wybor = 0;
        cin >> wybor;

        switch(wybor){
            case 1:
            os << obj.marka;
            case 2:
            os << obj.model;
            case 3:
            os << obj.rocznik;
            default:
            cout << "Błąd" << endl;
        
        }
    }

    void display(const Samochod& obj){
        cout << obj.marka << endl;
        cout << obj.model << endl;
        cout << obj.rocznik << endl;

    }
};

int main(){

    Samochod s1("Mercedes","ladny",2016);
    s1.getMarka();
    Samochod s2;
    
    return 0;
}