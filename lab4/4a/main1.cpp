#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


int main(){

fstream plik;

plik.open("plik.txt");

if(!plik){
    cout << "Nie udalo sie otworzyc pliku" << endl;
}

vector <int> liczba(9);

for (int i = 0; i < liczba.size(); i++)
{
    plik >> liczba[i];
    cout << liczba[i];

    

}

int a = 0, b = 0, c = 0;

for (int i = 0; i < 3; i++){
    liczba[i] = a;
    liczba[i+1] = b;
    liczba[i+2] = c;
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
}


}