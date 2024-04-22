#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    int wiersze = 0, kolumny = 0;

    cout << "Podaj ilosc wierszy: " << endl;
    cin >> wiersze;
    cout << "Podaj ilosc kolumn: " << endl;
    cin >> kolumny;

    // Alokacja dwuwymiarowej tablicy dynamicznej
    int **tablica = new int *[wiersze];
    for(int i = 0; i< wiersze; i++)
        tablica[i] = new int[kolumny];

    // Inicjowanie i wyświetlanie zawartości tablicy
    cout << "Zawartosc tablicy:" << endl;
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            tablica[i][j] = rand();
            cout << tablica[i][j] << " ";
        }
        cout << endl;
    }

   
    delete[] tablica;

    return 0;
}
