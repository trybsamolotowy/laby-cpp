#include <iostream>
#include <ctime>

using namespace std;

class Czlowiek {
    private:

        string imie;
        string nazwisko;
        string dataUrodzenia;

    public:

        void ustawImie(string imie) { this->imie = imie; }
        string pobierzImie() const {
             return imie; }

        void ustawNazwisko(string nazwisko) { this->nazwisko = nazwisko; }
        string pobierzNazwisko() const { 
            
            return nazwisko; }
        
        void ustawDataUrodzenia(string dataUrodzenia) { this->dataUrodzenia = dataUrodzenia;}
        string pobierzDataUrodzenia()  const {
            
            return dataUrodzenia;}


};

class student : public Czlowiek{
    
    int numer_indeksu;

    public:

    student(int numer_indeksu):Czlowiek()
    {
       this ->numer_indeksu= numer_indeksu;
    }

    void indeks(){
        //int numer_indeksu;
        cout << "Wprowadz numer indeksu: " << endl;
        cin >> numer_indeksu;
        cout << "Twoj numer indeksu to: "<<numer_indeksu<<endl;
    }
};

class Pracownik : public Czlowiek{
    
    string miejsce_pracy;

    public:

    Pracownik(string miejsce_pracy):Czlowiek(){
        this -> miejsce_pracy = miejsce_pracy;
    }

    void miejsce(){
        cout << "Podaj miejsce pracy: " << endl;
        cin >> miejsce_pracy;
        cout << "Twoje miejsce pracy to " << miejsce_pracy << endl;
    }


};

int main(){

    Czlowiek Julia;

    string imie;
    cout << "Podaj imie:"<<endl;
    cin >> imie;
    Julia.ustawImie(imie);

    string nazwisko;
    cout << "Podaj nazwisko:"<< endl;
    cin >> nazwisko;
    Julia.ustawNazwisko(nazwisko);
    
    string dataUr;
    cout << "Podaj date urodzenia w formacie DDMMRRRR (np. 23091975):"<< endl;
    cin >> dataUr;
    Julia.ustawDataUrodzenia(dataUr);
    
    cout << "Twoje dane osobowe to:" << endl;
    cout << "Imie i nazwisko: " << Julia.pobierzImie() << " " << Julia.pobierzNazwisko() << endl;
        
    // sprawdzenie poprawności dni
    string dzienUro = dataUr.substr(0, 2);

    int dzien = stoi(dzienUro);

    if (dzien > 31) {
        cout << "Wprowadzono zla wartosc dla dnia" << endl;
    } else {
        cout << "Dzien urodzenia to:  " << dzien << endl;
    }

    // sprawdzenie poprawnosci miesiecy
    string miesUro = dataUr.substr(2, 2);

    int miesiac = stoi(miesUro);

    if (miesiac > 12) {
        cout << "Wprowadzono zla wartosc dla miesiaca" << endl;
    } else {
        cout << "Miesiac urodzenia to: " << miesiac << endl;
    }


    // obliczanie wieku
    string rokUr = dataUr.substr(4);

    int lat = stoi(rokUr); // string to int
    int r = 2024 - lat;
   
    if (lat > 2024){
        cout << "Bledna data urodzenia." << endl;
    } else{
        cout << "Wiek: " << r << " lat" << endl;
    }

    string miejscepracy;
    

    Pracownik pracownikJulia(miejscepracy);
    pracownikJulia.miejsce();

    student studentJulia(42990282);
    studentJulia.indeks();

  return 0;

}
    