#include<iostream>
#include<cmath>

using namespace std;

class Kolo {
public:
    float promien;

    float pole_kola() {
        return M_PI * promien * promien;
    }
};

class Kwadrat {
public:
    float bok;

    float pole_kwadratu(){
        return  bok*bok;
    }
};


int main(){

int wybor, dzialanie = 1;

while(dzialanie){

cout << "Wybierz z menu jakiej figury chcesz policzyc pole?: " << endl;
cout << "1. Kolo" << endl;
cout << "2. Kwadrat" << endl;
cout << "3. Koniec programu" << endl;
cin >> wybor;

switch (wybor)
{
case 1:

    cout << "Wybrales wyliczanie pola kola." << endl;
    Kolo kolo;
    float r;
    cout << "Wprowadz wartosc promienia kola ktorego pole chcesz obliczyc" << endl;
    cin >> r; 
        if(r>0){
            kolo.promien = r;
            cout << "Wprowadziles promien rowny: " << r << " . Twoje pole wynosi: " << kolo.pole_kola() << "." << endl;
        }else{
            cout << "Podano niewlasciwa wartosc. Prosze podac liczbe wieksza niz zero." << endl;
        }
    
    break;

case 2:

    cout << "Wybrales wyliczanie pola kwadratu." << endl;
    Kwadrat Kwadrat;
    float bok;
    cout << "Wprowadz wartosc boku kwadratu ktorego pole chcesz obliczyc" << endl;
    cin >> bok; 
    Kwadrat.bok = bok;
        if(bok>0){
            cout << "Wprowadziles wartosc boku rowna: " << bok << ". Twoje pole wynosi: " << Kwadrat.pole_kwadratu() << "." << endl;
        }else{
        cout << "Podano niewlasciwa wartosc. Prosze podac liczbe wieksza niz zero." << endl;
        }

    break;

case 3:

    dzialanie = 0;

    break;

default:

    cout << "Blad" << endl;

    break;
}
}
return 0;
}
