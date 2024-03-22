#include <iostream>
#include <locale>
#include <codecvt>
#include <Windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF7);
    SetConsoleCP(CP_UTF8);

    // przykład użycia const z typami podstawowymi

    const int liczba_dni_w_tgodniu = 7;
    std::cout << "Liczba dni w tygodniu: " << liczba_dni_w_tgodniu << std::endl;

    // użycie const z wskaźnikami

    int liczba = 10;
    const int* wskaznik_na_const = &liczba;
    std::cout << "Wartosc wskazywana przez wskaznik wskaznik_na_const: " << wskaznik_na_const << std::endl;
    std::cout << "Wartosc zmiennej liczba: " << liczba << std::endl;
    std::cout << "Wartosc wskaznika z gwiazdka: " << *wskaznik_na_const << std::endl;
    
    // zastosowanie const z referencjami

    const int& referencja_na_const = liczba;
    std::cout << "Wartosc wskazywana przez referencja_na_const: " << referencja_na_const << std::endl;
    
    int zmienna = 5;
    int* wskaznik_na_zmienna = &zmienna;
    std::cout << "Wartosc zmiennej to: " << zmienna << std::endl;
    std::cout << "Adres zmiennej to: " << wskaznik_na_zmienna << std::endl;

    int zmienna2 = 4;
    std::cout << "Wartosc zmiennej2 to: " << zmienna2 << std::endl;
    std::cout << "Adres zmiennej2 to: " << &zmienna2 << std::endl;
    
    return 0;

}