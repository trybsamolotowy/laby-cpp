#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;


int suma_el_diag(vector<int> liczba){
    return liczba[0] + liczba[4] + liczba[8];
}
void iloczyn_skalar(vector <int> liczba, int a){

    vector <int> wynik(9);

    for(int i = 0; i < 9; i++)
    {
        wynik[i] = liczba[i] * a;
        cout << wynik[i] << " ";
        if ((i +1) % 3 == 0)
        cout << endl;
    }
}

void iloczyn_sama(vector<int> liczba) {
    
    //vector<int> wynik(9);

    for (int i = 0; i < 9; i++) {
        liczba[i] = liczba[i]*liczba[i];
        cout << liczba[i] << " ";
        if ((i +1) % 3 == 0)
        cout << endl;
    }
}



int main(){

fstream plik;
plik.open("plik.txt");

    if(!plik) 
    {cout << "Blad otwarcia pliku" << endl;
    return 0;}

vector <int> liczba(9);


    for (int i = 0; i < 9; i++) {
        plik >> liczba[i];
    }

plik.close();

 cout << "Macierz 3x3:\n";
    for (int i = 0; i < 9; i++) {
        cout << liczba[i] << " ";
        if ((i +1) % 3 == 0)
        cout << endl;
    }

int suma = suma_el_diag(liczba);

cout << "Suma elementow na glownej przekatnej: " << suma << endl;

cout << "Wyswietlenie iloczynu skalarnego: " << endl;
iloczyn_skalar(liczba, 2);

cout << "Wyswietlenie iloczynu macierzy samej przez siebie: " << endl;
iloczyn_sama(liczba);

return 0;



}