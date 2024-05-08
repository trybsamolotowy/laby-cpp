#include <iostream>

using namespace std;

template<typename T>
T szukaj(int n, T a[], T w){
    for(int i = 0; i < n; i++){
        if(a[i] == w){
            cout << "Poszukiwany indeks ma wartosc: " << i << endl;
            return i; 
        }
    }
    cout <<"Nie znaleziono szukanej wartosi" << endl;
    return -1; 
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]); // Obliczenie wielkości tablicy
    int w = 5;
    szukaj(n, a, w);
    return 0;
}
