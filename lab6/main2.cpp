#include <iostream>
#include <cmath>
#include <locale>

/*

Napisz klasę "Figura", która będzie miała pole (np. protected) związane z wymiarami figur
(np. długość boku kwadratu, promień koła, wysokość trójkąta). Stwórz dziedziczące z niej
klasy dla konkretnych figur, takich jak kwadrat, koło czy trójkąt. Napisz metody, które
umożliwią obliczanie pola i obwodu każdej z tych figur.

*/
using namespace std;

class figura{

    protected:
        int dlugosc_boku_kwadratu;
        int promien_kola;
        int wysokosc_trojkata, bok_trojkata;

    public:

    figura(int dlugosc) : dlugosc_boku_kwadratu(dlugosc), promien_kola(dlugosc) {}  //konstruktor klasy nadrzednej
    //figura(int promien) : promien_kola(promien) {}
    figura(int wysokosc, int bok) : wysokosc_trojkata(wysokosc) , bok_trojkata(bok) {}
    
    virtual float liczenie_pola_kwadratu(){

    return dlugosc_boku_kwadratu*dlugosc_boku_kwadratu;

    }

    virtual float liczenie_pola_kola(){

    return M_PI*promien_kola*promien_kola;

    }

    virtual float liczenie_pola_trojkata(){
   
    return ((1/2)*bok_trojkata*wysokosc_trojkata);

    }
};

class  kwadrat : public figura {

    public:

    kwadrat(int dlugosc) : figura(dlugosc) {}  //wywołanie konstruktora klasy nadrzednej

    float liczenie_pola_kwadratu() override {

        return dlugosc_boku_kwadratu * dlugosc_boku_kwadratu;

        }

};

class trojkat : public figura {

    public:

    trojkat(int wysokosc, int bok) : figura(wysokosc, bok) {}

    float liczenie_pola_trojkata() override {

    return (1.0/2)*bok_trojkata*wysokosc_trojkata;

    }

};


class kolo : public figura {

    public:

    kolo(int promien) : figura(promien) {}

    float liczenie_pola_kola() override {

    return M_PI*promien_kola*promien_kola;

    }
};


int main(){

    kwadrat k(2);
    cout << "Pole kwadratu wynosi: " << k.liczenie_pola_kwadratu() << endl;
    trojkat t(3,4);
    cout << "Pole trojkata wynosi: " << t.liczenie_pola_trojkata() << endl;
    kolo c(3);
    cout << "Pole kola wynosi: " << c.liczenie_pola_kola() << endl;

    return 0;
}