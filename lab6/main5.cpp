#include <iostream>
#include <vector>

using namespace std;


class baza_danych{

private:

string login, haslo;
int poziom_dostepu;

public:

baza_danych(string login, string haslo, int poziom_dostepu) : login(login), haslo(haslo), poziom_dostepu(poziom_dostepu){}
baza_danych(const baza_danych& other) : login(other.login), haslo(other.haslo), poziom_dostepu(other.poziom_dostepu){};

void display(){
    cout << "Login: " << login << " Haslo: " << haslo << " Poziom dostepu: " << poziom_dostepu << endl;
}


};

int main(){

// dodawanie poprzez tworzenie obiektu

baza_danych osoba1("login", "haslo", 1);
baza_danych osoba2("login2", "haslo2", 2);
baza_danych osoba3("login3", "haslo3", 3);

vector<baza_danych> baza;

baza_danych osoba4("login4", "maslo", 4);

// modyfikacja dzieki konstruktorowi kopiującemu

osoba2 = osoba4;

// usuwanie za pomocą erase

baza.push_back(osoba1);
baza.push_back(osoba2);
baza.push_back(osoba3);
baza.erase(baza.end());

for(int i = 0; i < baza.size(); i++){
    baza[i].display();

}

}