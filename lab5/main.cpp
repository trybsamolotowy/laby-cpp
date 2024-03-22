#include<iostream>
#include<cmath>

namespace moj_prostokat{
    float szerokosc = 20;
    float wysokosc = 10;
}

int main(){

/*
int zmienna = 2; // This is a simple initialization of a variable with a value of 2.
int zmienna2(2); // This is a function declaration for a function named `zmienna2` that takes an integer argument with a default value of 2. It is not a variable declaration.
int zmienna3{2}; // This is a uniform initialization of a variable with a value of 2. It is a C++11 feature that provides a more consistent way of initializing variables.
int zmienna4 = {2}; // This is a copy-list-initialization of a variable with a value of 2. It is also a C++11 feature that provides a more consistent way of initializing variables.

cout << zmienna << endl;
cout << zmienna2 << endl;
cout << zmienna3 << endl;
cout << zmienna4 << endl;

*/

std::string zdanie;
zdanie = "To jest tekst zawierajacy \"cudzyslow\" i (nawiasy)" ;
std::cout << zdanie << std::endl;

int pole_prostokatu = 0, pole_kola = 0, r = 2;
const float pi = 3.14;

pole_prostokatu = moj_prostokat::szerokosc*moj_prostokat::wysokosc;
std::cout<<"Pole prostokata to: "<< pole_prostokatu <<std::endl;

pole_kola = pi * r * r;
std::cout<<"Pole kola to: "<< pole_kola <<std::endl;

const int liczba_puszek_w_pojemniku = 10; 


    int liczba_warstw;
    std::cout << "Wprowadz liczbe warstw na palecie: ";
    std::cin >> liczba_warstw;

    int liczba_puszek_na_palecie_razem = liczba_warstw * liczba_puszek_w_pojemniku;

    std::cout << "Liczba puszek na palecie to: " << liczba_puszek_na_palecie_razem << std::endl;

constexpr int start =1;

}


