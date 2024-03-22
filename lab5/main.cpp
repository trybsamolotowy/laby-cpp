#include <iostream>
#include <cmath>
#include <limits>
#include <cstdint>

namespace moj_prostokat{
    float szerokosc = 20;
    float wysokosc = 10;
}

int main(){


int zmienna = 2; // This is a simple initialization of a variable with a value of 2.
int zmienna2(2); // This is a function declaration for a function named `zmienna2` that takes an integer argument with a default value of 2. It is not a variable declaration.
int zmienna3{2}; // This is a uniform initialization of a variable with a value of 2. It is a C++11 feature that provides a more consistent way of initializing variables.
int zmienna4 = {2}; // This is a copy-list-initialization of a variable with a value of 2. It is also a C++11 feature that provides a more consistent way of initializing variables.

std::cout << zmienna << std::endl;
std::cout << zmienna2 << std::endl;
std::cout << zmienna3 << std::endl;
std::cout << zmienna4 << std::endl;



std::string zdanie;
zdanie = "To jest tekst zawierajacy \"cudzyslow\" i (nawiasy)" ;
std::cout << zdanie << std::endl;

int pole_prostokatu = 0, pole_kola = 0, r = 2;
const float pi = 3.14;

pole_prostokatu = moj_prostokat::szerokosc*moj_prostokat::wysokosc;
std::cout<<"Pole prostokata to: "<< pole_prostokatu <<std::endl;

pole_kola = pi * r * r;
std::cout<<"Pole kola to: "<< pole_kola <<std::endl;


    int liczba_warstw, liczba_puszek;
    std::cout << "Wprowadz liczbe warstw na palecie: ";
    std::cin >> liczba_warstw;
    std::cout << "Wprowadz liczbe warstw na palecie: ";
    std::cin >> liczba_puszek;

    const int liczba_warstw_stala = liczba_warstw;
    const int liczba_puszek_stala = liczba_puszek;

    int liczba_puszek_na_palecie_razem = liczba_warstw_stala * liczba_puszek_stala;

    std::cout << "Liczba puszek na palecie to: " << liczba_puszek_na_palecie_razem << std::endl;
 

    constexpr int Start = 1, Stop = 10;

    std::cout << "Wybierz wartosc 1 lub 10: " << std::endl;
    int dzialanie;
    std::cin >> dzialanie;

    switch(dzialanie){

        case Start:
            std::cout << "Wybrano wartosc 1" << std::endl;
        break;

        case Stop:
            std::cout << "Wybrano wartosc 10" << std::endl;
        break;

        default:
            std::cout << "Zly wybor" << std::endl;

    }

    

    std::cout << "type\t│ lowest()\t│ min()\t\t│ max()\n"
    << "bool\t│ "
    << std::numeric_limits<bool>::lowest() << "\t\t│ "
    << std::numeric_limits<bool>::min() << "\t\t│ "
    << std::numeric_limits<bool>::max() << '\n'
    << "uchar\t│ "
    << +std::numeric_limits<unsigned char>::lowest() << "\t\t│ "
    << +std::numeric_limits<unsigned char>::min() << "\t\t│ "
    << +std::numeric_limits<unsigned char>::max() << '\n'
    << "int\t│ "
    << std::numeric_limits<int>::lowest() << "\t│ "
    << std::numeric_limits<int>::min() << "\t│ "
    << std::numeric_limits<int>::max() << '\n'
    << "float\t│ "
    << std::numeric_limits<float>::lowest() << "\t│ "
    << std::numeric_limits<float>::min() << "\t│ "
    << std::numeric_limits<float>::max() << '\n'
    << "double\t│ "
    << std::numeric_limits<double>::lowest() << "\t│ "
    << std::numeric_limits<double>::min() << "\t│ "
    << std::numeric_limits<double>::max() << '\n';

// Sprawdzenie szerokości typu int8_t
    std::cout << "INT8_MIN: " << static_cast<int>(INT8_MIN) << std::endl;
    std::cout << "INT8_MAX: " << static_cast<int>(INT8_MAX) << std::endl;

    // Sprawdzenie szerokości typu int_fast8_t
    std::cout << "FAST_INT8_MIN: " << static_cast<int>(INT_FAST8_MIN) << std::endl;
    std::cout << "FAST_INT8_MAX: " << static_cast<int>(INT_FAST8_MAX) << std::endl;

    // Sprawdzenie szerokości typu intmax_t
    std::cout << "INTMAX_MIN: " << INT_MIN << std::endl;
    std::cout << "INTMAX_MAX: " << INT_MAX << std::endl;

    // Sprawdzenie szerokości typu int_least8_t
    std::cout << "LEAST_INT8_MIN: " << static_cast<int>(INT_LEAST8_MIN) << std::endl;
    std::cout << "LEAST_INT8_MAX: " << static_cast<int>(INT_LEAST8_MAX) << std::endl;

    // Wyświetlenie informacji na temat typu int z poprzedniego kodu
    std::cout << "int\t│ "
              << std::numeric_limits<int>::lowest() << "\t│ "
              << std::numeric_limits<int>::min() << "\t│ "
              << std::numeric_limits<int>::max() << '\n';


}


