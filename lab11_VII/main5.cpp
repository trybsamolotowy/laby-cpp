#include <iostream>
#include <string>

using namespace std;

class osoba{

private:

    //static osoba* zbierz_dane;
    string imie, nazwisko;
    //static osoba* zbierz_dane;
    osoba(string nazwisko) : nazwisko(nazwisko) {
        imie = "Nieznany";
    }

public:

    osoba(string a, string b): imie(a), nazwisko(b) {
         
        if (imie.empty())
            imie = "Nieznany";
    
    }

   static osoba* z_nazwiska(string nazwisko){
    return new osoba(nazwisko);
   }
    string wyswietl(){
        return imie + " " + nazwisko;
    }
   
};


int main(){

    osoba* o2 = osoba::z_nazwiska("Kaczmarski");
    cout << o2->wyswietl() << endl;
    osoba os3("","Kuzma");
    cout << os3.wyswietl() << endl;
    osoba os2("Adam", "Kowalski");
    cout << os2.wyswietl() << endl;

    return 0;
}