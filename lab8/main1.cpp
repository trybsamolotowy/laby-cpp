#include <iostream>
#include <cstdlib>

using namespace std;
class macierz {

public:

int wiersze, kolumny;

void display_matrix(int liczba_wierszy, int liczba_kolumna){
    
    int arr[liczba_wierszy][liczba_kolumna];
   
    for (int i = 0; i < liczba_wierszy; i++){
        for (int j = 0; j < liczba_kolumna; j++){
            arr[i][j] = rand();
        }
        cout << endl;
    }
    
    
    for (int i = 0; i < liczba_wierszy; i++){
        for (int j = 0; j < liczba_kolumna; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Macierz ma rozmiar: " << wiersze << " x " << kolumny << " | " << sizeof(arr) <<" is display 60 instead of 15 bc it is 4*15 (4 bytesx15 elements)"<< endl;
}
macierz(){

    wiersze = 3;
    kolumny = 5;

}

};
int main(){

    macierz macierz1;
    macierz1.display_matrix(macierz1.wiersze, macierz1.kolumny);

}