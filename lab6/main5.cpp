#include <iostream>
#include <vector>
#include <string>

using namespace std;

class baza_danych{

public:

string login, haslo;
int poziom_dostepu;

baza_danych(string login, string haslo, int poziom_dostepu) : login(login), haslo(haslo), poziom_dostepu(poziom_dostepu){}

baza_danych() : login(""), haslo(""), poziom_dostepu(0) {} // konstruktor domyślny

void display() const{
    cout << "Login: " << login << " Haslo: " << haslo << " Poziom dostepu: " << poziom_dostepu << endl;
}

};

class ZarzadzanieBazaDanych{

private:

    vector<baza_danych> uzytkownicy;

public:

void dodaj_uzytkownika(string login, string haslo, int poziom_dostepu){
    uzytkownicy.push_back(baza_danych(login, haslo, poziom_dostepu));
}
void usun_uzytkownika(string login){
    for(int i = 0; i < uzytkownicy.size(); i++){
        if(uzytkownicy[i].login == login){
            uzytkownicy.erase(uzytkownicy.begin() + i);
    }}
}
void modyfikuj_uzytkownika(string login, string haslo, int poziom_dostepu){
    for(int i = 0; i < uzytkownicy.size(); i++){
        if(uzytkownicy[i].login == login){
            uzytkownicy[i].haslo = haslo;
            uzytkownicy[i].poziom_dostepu = poziom_dostepu;
        }
    }
}
bool logowanie(string login, string haslo){
    for(int i = 0; i < uzytkownicy.size(); i++){
        if(uzytkownicy[i].login == login && uzytkownicy[i].haslo == haslo){
            return true;
        }
    }
    return false;
}

 void wyswietl_uzytkownikow() {
        for (const auto& uzytkownik : uzytkownicy) {
            uzytkownik.display();
        }
    }

};

class Administrator : public baza_danych{
    
    public: 

    Administrator(string login, string haslo) : baza_danych(login, haslo,1){}
};

class Uzytkownik : public baza_danych{
    
    public:

    Uzytkownik(string login, string haslo) : baza_danych(login, haslo, 0){}
};

int main(){

ZarzadzanieBazaDanych baza;
    
    baza.dodaj_uzytkownika("admin", "adminpass", 1);
    baza.dodaj_uzytkownika("user", "userpass", 0);

    if (baza.logowanie("admin", "adminpass")) {
        cout << "Zalogowano jako admin" << endl;
    } else {
        cout << "Błędne dane logowania" << endl;
    }

    baza.wyswietl_uzytkownikow();

    baza.usun_uzytkownika("user");

    baza.wyswietl_uzytkownikow();

    baza.dodaj_uzytkownika("user0","userpass",0);

    baza.modyfikuj_uzytkownika("user0","userpass",1);
    
    baza.wyswietl_uzytkownikow();

return 0;

}