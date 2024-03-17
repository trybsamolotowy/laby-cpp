#include <iostream>
#include <cmath>
#include<math.h>
#include <fstream>
#include <string>

using namespace std;

class TPunkt{
    public:
    int x, y, z;

    void podaj_liczbe(){
        cout << "Podaj wartosc X: "; cin >> x;  
        cout << "Podaj wartosc Y: "; cin >> y;
        cout << "Podaj wartosc Z: "; cin >> z;  
    }

    void wyswietlanie(){
        cout << "Wspolrzedne to (" << x << "," << y << "," << z << ")" << endl;
    }
};

class Okrag{
public: 
    TPunkt srodek;
    int r;

    void wpisz_wartosc_promienia(){
        cout << "Wpisz wartosc promienia: "; cin >> r;
        cout << "Promien wynosi " << r << endl;
    }
    void wyswietlanie(){
        cout << "Srodek okregu to: ";
        srodek.wyswietlanie();
        cout << "Promien okregu to: " << r << endl;
    }
    void oblicz_pole(){
        float pole = round(M_1_PI)*r*r; 
        cout << "Pole powierzchni okregu wynosi " << pole << endl;
    }
    int liczba_punktow_wspolnych(const Okrag& inny_okrag){
        // Obliczamy odległość między środkami obu okręgów
        float odleglosc_srodkow = sqrt(pow(srodek.x - inny_okrag.srodek.x, 2) + pow(srodek.y - inny_okrag.srodek.y, 2) + pow(srodek.z - inny_okrag.srodek.z, 2));

        // Sprawdzamy, czy okręgi są rozłączne
        if (odleglosc_srodkow > r + inny_okrag.r) {
            cout << " Brak punktów wspolnych" << endl; 
        }
        // Sprawdzamy, czy okręgi są styczne zewnętrznie
        else if (abs(odleglosc_srodkow - (r + inny_okrag.r)) < 1e-6) {
            cout << " Jeden punkt wspolny " << endl; 
        }
        // Sprawdzamy, czy okręgi mają dwa punkty przecięcia
        else if (odleglosc_srodkow < r + inny_okrag.r && odleglosc_srodkow > abs(r - inny_okrag.r)) {
            cout << "Dwa punkty wspolne " << endl;
        }
        // W przeciwnym razie okręgi są albo zawarte jeden w drugim, albo identyczne
        else {
            cout << "Nieskonczona liczba punktow" << endl;
            
        }
        
    }
};

void przesuniecie(TPunkt &punkt){
    float wektor_przesuniecia[3] = {1, 1, 0};
    punkt.x += wektor_przesuniecia[0];
    punkt.y += wektor_przesuniecia[1];
    punkt.z += wektor_przesuniecia[2];
    cout << "Nowe wspolrzedne punktu po przesunieciu o wektor [1 1 0]: (" << punkt.x << "," << punkt.y << "," << punkt.z << ")" << endl;
}

float odleglosc(TPunkt zmienna1, TPunkt zmienna2){
    float dx = zmienna2.x - zmienna1.x;  
    float dy = zmienna2.y - zmienna1.y;
    float dz = zmienna2.z - zmienna1.z;
    return sqrt(dx*dx + dy*dy + dz*dz);
}

TPunkt obrot_o_kat(TPunkt punkt, float kat){
    float kat_rad = kat * M_PI / 180; // konwersja na radiany
    float cos_kata = cos(kat_rad);
    float sin_kata = sin(kat_rad);

    TPunkt nowy_punkt;
    nowy_punkt.x = punkt.x * cos_kata - punkt.y * sin_kata;
    nowy_punkt.y = punkt.x * sin_kata + punkt.y * cos_kata;
    nowy_punkt.z = punkt.z;
    return nowy_punkt;
}

int main(){

}
