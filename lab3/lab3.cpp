#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int rozmiar = 3;

void wczytaj_macierz(string nazwa_pliku, int macierz[rozmiar][rozmiar]){
    ifstream plik(nazwa_pliku);

    if(plik.is_open()){
        for(int i = 0; i < rozmiar; i++){
            for(int j = 0; j < rozmiar; j++){
                plik >> macierz[i][j];
            }
        }
        plik.close();
    }else{
        cout << "Nie mozna otworzyc pliku" << endl;
    }
}

void wypisz_macierz(int macierz[rozmiar][rozmiar]){
    for(int i = 0; i < rozmiar; i++){
        for(int j = 0; j < rozmiar; j++){
            cout << macierz[i][j] << " ";
        }
        cout << endl;
    }
}

int suma_diagonali(int macierz[rozmiar][rozmiar]){
    int suma = 0;
    for(int i = 0; i < rozmiar; i++){
        suma += macierz[i][i];
    }
    return suma;
}

void mnozenie_przez_skalar(int macierz[rozmiar][rozmiar], int skalar){
    for(int i = 0; i < rozmiar; i++){
        for(int j = 0; j < rozmiar; j++){
            macierz[i][j] *= skalar;
        }
    }

}
void mnozenie_przez_siebie(int macierz[rozmiar][rozmiar]){
    for(int i = 0; i < rozmiar; i++){
        for(int j = 0; j < rozmiar; j++){
            macierz[i][j] *= macierz[i][j];
        }
    }

}

int main(){

    int macierz[rozmiar][rozmiar];
   
    wczytaj_macierz("./data.txt", macierz);
    wypisz_macierz(macierz);
    
    int suma = suma_diagonali(macierz);
    cout << "Suma diagonali wynosi : " << suma << endl;
    
    mnozenie_przez_siebie(macierz);
    wypisz_macierz(macierz);
    
    return 0;
}
