#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string imie;
    int wiek;
};

int main() {
    std::vector<Student> lista_studentow;
    std::string imie;
    int wiek;

    std::cout << "Wprowadzaj studentow (wpisz -1 aby zakonczyc wprowadzanie):\n";

    
    while (true) {
        std::cout << "Imie: ";
        std::cin >> imie;
        if (imie == "-1") {
            break; 
        }
        std::cout << "Wiek: ";
        std::cin >> wiek;
        lista_studentow.push_back({imie, wiek});
    }

    
    std::cout << "Studenci z wiekiem 20 lat lub wiecej:\n";
    for (const auto& student : lista_studentow) {
        if (student.wiek >= 20) {
            std::cout << "Imie: " << student.imie << ", Wiek: " << student.wiek << std::endl;
        }
    }

    return 0;
}
