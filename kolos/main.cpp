#include <iostream>
#include <vector>
# include <string>


using namespace std;


class uzytkownik{

private:

    int numer_karty;

public:

    uzytkownik(int a): numer_karty(a){}
   
   //uzytkownik(wypozyczajacy &obj): numer_karty(obj.numer_karty) {}

    friend class administartor;
    friend class wypozyczajacy;

};

class ksiazka {
private:
    string nazwa, autor, rok, wydanie;

public:
    ksiazka(string a, string b): nazwa(a), autor(b) {}

    void wyswietl() {
        cout << nazwa << " - " << autor << endl;
    }
};
class administartor{

private:

    vector<ksiazka> kolekcja_ksiazek;
    vector<uzytkownik> kolekcja_uzytkownikow;

public: 

    
    void dodaj_ksiazke(string nazwa, string autor) {
        ksiazka nowa_ksiazka(nazwa, autor);
        kolekcja_ksiazek.push_back(nowa_ksiazka);
    }

    void usun_ksiazke(int index) {
        if(index >= 0 && index < kolekcja_ksiazek.size()) {
            kolekcja_ksiazek.erase(kolekcja_ksiazek.begin() + index);
        }else{
            cout << "Nie na takiej ksiazki" << endl;
        }
    }

    void wypisz_ksiazki() {
    cout << "Książki w bibliotece:" << endl;
    int numer = 1;
    for (int i = 0; i < kolekcja_ksiazek.size(); ++i) {
        cout << numer++ << ". ";
        kolekcja_ksiazek[i].wyswietl();
    }
    }

   void dodaj_uzytkownika(uzytkownik nowy_uzytkownik){
    kolekcja_uzytkownikow.push_back(nowy_uzytkownik);
    }

    void usun_uzytkownika(int index){
        if (index >= 0 && index < kolekcja_uzytkownikow.size()) {
            kolekcja_uzytkownikow.erase(kolekcja_uzytkownikow.begin() + index);
        } else {
            cout << "Nieprawidłowy indeks użytkownika." << endl;
        }
    }


    void wypisz_uzytkownikow(){
        cout << "Uzytkownicy: " << endl;
    }
};

class wypozyczajacy : uzytkownik{

private:

vector<ksiazka> ksiazki;

public:

        void wypozycz(){
        cout << "Ktora pozycje chcesz wypozyczyc? " << endl;
        int index;
        cin >> index;
        if(index >= 0 && index < ksiazki.size()){
        ksiazki.erase(ksiazki.begin() + index);
    }
    }

    void zwroc(){
        cout << "Ktora pozycje chcesz zwrocic? " << endl;
        int index;
        cin >> index;
        --index; 
        if(index >= 0 && index < ksiazki.size()){
            ksiazki.push_back(ksiazki[index]);
        }
    }
    
};





//class egzemplarz{};

//class czasopismo{};



int main() {
    cout << "Podaj haslo: ";
    string haslo;
    cin >> haslo;

    if (haslo == "student2000") {
        administartor admin;

        cout << "Zalogowales sie jako administrator" << endl;
        cout << "Co chcesz teraz zrobic?" << endl;
        cout << "1. Dodaj uzytkownika" << endl;
        cout << "2. Usun uzytkownika" << endl;
        cout << "3. Dodaj ksiazke" << endl;
        cout << "4. Usun ksiazke" << endl;
        cout << "5. Wyswietl ksiazki" << endl;
        cout << "6. Wyswietl uzytkownikow" << endl;
        cout << "7. Wyloguj" << endl;

        int wybor = 0;
        cin >> wybor;

        switch (wybor) {
            case 1: {
                cout << "Dodawanie uzytkownika" << endl;
                int numer_karty;
                cout << "Podaj numer karty: ";
                cin >> numer_karty;
                uzytkownik nowy_uzytkownik(numer_karty);
                admin.dodaj_uzytkownika(nowy_uzytkownik);
                cout << "Dodano uzytkownika" << endl;
                break;
            }
            case 2: {
                cout << "Usuwanie uzytkownika" << endl;
                int indeks;
                cout << "Podaj indeks uzytkownika do usuniecia: ";
                cin >> indeks;
                admin.usun_uzytkownika(indeks);
                break;
            }
            case 3: {
                cout << "Dodawanie ksiazki" << endl;
                string nazwa, autor;
                cout << "Podaj nazwe ksiazki: ";
                cin.ignore();
                getline(cin, nazwa);
                cout << "Podaj autora ksiazki: ";
                getline(cin, autor);
                admin.dodaj_ksiazke(nazwa, autor);
                cout << "Dodano ksiazke" << endl;
                break;
            }
            case 4: {
                cout << "Usuwanie ksiazki" << endl;
                int indeks;
                cout << "Podaj indeks ksiazki do usuniecia: ";
                cin >> indeks;
                admin.usun_ksiazke(indeks);
                break;
            }
            case 5: {
                admin.wypisz_ksiazki();
                break;
            }
            case 6: {
                // wyswietlanie uzytkownikow
                break;
            }
            case 7: {
                cout << "Wylogowano" << endl;
                break;
            }
            default:
                cout << "Niepoprawny wybor" << endl;
                break;
        }
    } else {
        cout << "Zalogowales sie jako wypozyczajacy" << endl;
        cout << "Co chcesz teraz zrobic?" << endl;
        cout << "1. Wypozycz" << endl;
        cout << "2. Oddaj" << endl;
        cout << "3. Wyswietl wypozyczone ksiazki" << endl;

        int wybor = 0;
        cin >> wybor;

        switch (wybor) {
            case 1:
                cout << "Wypozyczanie ksiazki" << endl;
                //wypozyczajacy.wypozycz();
                break;
            case 2:
                cout << "Oddawanie ksiazki" << endl;
                //wypozyczajacy.zwroc();
                break;
            case 3:
                cout << "oto wypozyczone przez ciebie ksiazki:" << endl;
                //wypozyczajacy.wyswietl_wypozyczone();
                break;
            default:
                cout << "Cos poszlo nie tak" << endl;
                break;
        }
    }

    return 0;
}
