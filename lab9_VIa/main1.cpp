#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    cout << "Podaj rozmiar tablicy: " << endl;
    int rozmiar;
    cin >> rozmiar;

    int *tablica = new int[rozmiar];

    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = rand();
    }

    // Wyświetlenie zawartości tablicy
    cout << "Zawartosc tablicy:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    // Sortowanie tablicy
    sort(tablica, tablica + rozmiar);

    // Wyświetlenie posortowanej tablicy
    cout << "Posortowana tablica:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    // Zwolnienie pamięci
    delete[] tablica;
    
    return 0;
}
