#include <iostream>
#include <string>
#include <locale>

using namespace std;


class kwadrat{

private:

    int dlugosc_boku = 0, id;

public:
    
    kwadrat() : kwadrat(1,0){}
    kwadrat(int dlugosc_boku, int id) {
        this -> dlugosc_boku = dlugosc_boku;
        this -> id = id;
    }
    
    //konstruktor delegujący
    kwadrat(int jakas_dlugosc) : kwadrat(dlugosc_boku,0){}
    
    void wyswietl(){
        cout << dlugosc_boku << endl;
    }
};
int main(){

    kwadrat k;
    
    k.wyswietl();

    kwadrat k2(3,4);

    k2.wyswietl();

    return 0;

}