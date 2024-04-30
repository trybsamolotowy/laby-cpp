#include <iostream>

using namespace std;

class ksiazka{

private: 

    string tytul, autor;

public: 

    ksiazka(const ksiazka& kopia){
        this -> tytul = kopia.tytul;
        this -> autor = kopia.autor;
    }

    ksiazka(string tytul, string autor): tytul(tytul), autor(autor){}

    void wyswietl(){
        cout << tytul << " - " << autor << endl;
    }
};
int main(){

    ksiazka ksiazka1("ksiazka1", "autor1");
    ksiazka ksiazka2("ksiazka2", "autor2");
    ksiazka ksiazka3(ksiazka1);

    ksiazka1.wyswietl();
    ksiazka2.wyswietl();
    ksiazka3.wyswietl();

    
    return 0;

}