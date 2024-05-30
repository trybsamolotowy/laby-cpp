#include <iostream>
#include <cmath>

using namespace std;

class Wektor {
private:
    float x, y, z;

public:
    Wektor(float zmienna1, float zmienna2, float zmienna3) : x(zmienna1), y(zmienna2), z(zmienna3) {}

    Wektor dodawanie(const Wektor &drugi_wektor) const {
        return Wektor(x + drugi_wektor.x, y + drugi_wektor.y, z + drugi_wektor.z);
    }

    Wektor odejmowanie(const Wektor &drugi_wektor) const {
        return Wektor(x - drugi_wektor.x, y - drugi_wektor.y, z - drugi_wektor.z);
    }

    Wektor mnozenie(int skalar) const {
        return Wektor(x * skalar, y * skalar, z * skalar);
    }

    Wektor dzielenie(int skalar) const {
        return Wektor(x / skalar, y / skalar, z / skalar);
    }

    float dlugosc_wektora() const {
        return sqrt(x * x + y * y + z * z);
    }

    friend ostream& operator<<(ostream& os, const Wektor& wektor) {
        os << "x: " << wektor.x << " y: " << wektor.y << " z: " << wektor.z;
        return os;
    }
};

int main() {
    
    Wektor wektor1(2, 2, 2);
    Wektor wektor2(1, 1, 1);

    cout << "Dlugosc wektora1: " << wektor1.dlugosc_wektora() << endl;

    Wektor wynikDodawania = wektor1.dodawanie(wektor2);
    cout << "Dodawanie: " << wynikDodawania << endl;

    Wektor wynikOdejmowania = wektor1.odejmowanie(wektor2);
    cout << "Odejmowanie: " << wynikOdejmowania << endl;

    Wektor wynikMnozenia = wektor1.mnozenie(2);
    cout << "Mnozenie: " << wynikMnozenia << endl;

    Wektor wynikDzielenia = wektor1.dzielenie(2);
    cout << "Dzielenie: " << wynikDzielenia << endl;

    return 0;
}
