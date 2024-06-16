#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class osoba {
private:
    string imie, nazwisko;

public:
    // Konstruktor domyślny
    osoba() : imie(""), nazwisko("") {}

    // Konstruktor z parametrami
    osoba(string a, string b): imie(a), nazwisko(b) {}

    string getImie() {
        return imie;
    }

    // Funkcja operator<< do zapisu stanu obiektu do pliku
    friend ofstream& operator<<(ofstream& ofs, const osoba& o) {
        if (ofs.is_open()) {
            ofs << o.imie << endl << o.nazwisko << endl;
        } else {
            cout << "Blad otwarcia pliku!" << endl;
        }
        return ofs;
    }

    // Funkcja operator>> do odczytu stanu obiektu z pliku
    friend ifstream& operator>>(ifstream& ifs, osoba& o) {
        if (ifs.is_open()) {
            getline(ifs, o.imie);
            getline(ifs, o.nazwisko);
        } else {
            cout << "Blad otwarcia pliku!" << endl;
        }
        return ifs;
    }
};

int main() {
    // Tworzenie obiektu osoby
    osoba o1("Jan", "Kowalski");
    cout << o1.getImie() << endl;

    // Zapis obiektu do pliku
    ofstream ofs("data.txt");
    ofs << o1;
    ofs.close();

    // Tworzenie nowego obiektu osoby do odczytu danych z pliku
    osoba o2;

    // Odczyt obiektu z pliku
    ifstream ifs("data2.txt");
    ifs >> o2;
    ifs.close();

    // Wyświetlanie imienia odczytanego z pliku obiektu
    cout << o2.getImie() << endl;

    return 0;
}
