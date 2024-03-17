#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

const int rozmiar = 10;

void wczytaj_tablice(string nazwa_pliku, int tablica[], int rozmiar){
    
    ifstream plik(nazwa_pliku);

    if(plik.is_open()){
        for(int i = 0; i < rozmiar; i++){
            plik >> tablica[i];
        }
        plik.close( );
    }else{
        cout << "Nie mozna otworzyc pliku!" << endl;
            }
}

int suma_elementow(int tablica[], int rozmiar){

    int suma = 0;
    
    for(int i = 0; i < rozmiar; i++){
        suma += tablica[i];
        }
    return suma;
}

int main(){
    
    int tablica[rozmiar];

    wczytaj_tablice("data2.txt",tablica, rozmiar);
    
    int suma = suma_elementow(tablica, rozmiar);
    cout << "suma wynosi: " << suma;

}