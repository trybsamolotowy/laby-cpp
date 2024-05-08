#include <iostream>
#include <vector>

int main() {
    std::vector<int> liczby;
    int liczba;

    std::cout << "Wprowadzaj liczby calkowite (wpisz -1 aby zakonczyc wprowadzanie):\n";

    

    while (true) {
        std::cin >> liczba;
        if (liczba == -1) {
            break;
        }
        liczby.push_back(liczba);
    }

    
    int suma = 0;
    for (int i = 0; i < liczby.size(); ++i) {
        suma += liczby[i];
    }
    
    
    double rozmiar = liczby.size();
    double srednia = suma / rozmiar;


    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Srednia arytmetyczna: " << srednia << std::endl;

    return 0;
}
