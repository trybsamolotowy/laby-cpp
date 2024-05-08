#include <iostream>
#include <string>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>

using namespace std;

template<typename T>
void konwersja(T liczba){
    
    char buffer [8];
    itoa(liczba,buffer,10);
    cout << "Liczba zmieniona na string to: " << liczba << ". Potwierdzenie: " << buffer<< endl;
    
}

int main(){

    konwersja(1);

    return 0;

}