#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

void sum_el(vector <int> &liczba){

    float suma = 0;
    for(float i = 0; i < liczba.size(); i++){
        suma += liczba[i];
    }
    cout << "Suma elementow: " << suma << endl;
}

void srednia_ar(vector <int> &liczba){

    float srednia = 0;

    for(float i = 0; i < liczba.size(); i++){
        srednia += liczba[i];
    }

    float wynik = srednia/liczba.size();

    cout << "Srednie arytmetyczne: " << wynik << endl;
}

void srednia_geom(vector <int> &liczba){

    float srednia = 1;

    for(float i = 0; i < liczba.size(); i++){
        srednia *= liczba[i];
    }
    float pot = 1.0/liczba.size();
    float wynik = pow(srednia, pot);

    cout << "Srednia geometryczna: " << wynik << endl;

}

int main(){

fstream plik;

plik.open("plik.txt");

if(!plik){
    cout << "Nie udalo sie otworzyc pliku" << endl;
}

vector <int> liczba(3);

for(int i = 0; i < 3; i++){
    plik >> liczba[i];
    cout << liczba[i] << " ";
}

plik.close();


sum_el(liczba);
srednia_ar(liczba);
srednia_geom(liczba);

    return 0;
}