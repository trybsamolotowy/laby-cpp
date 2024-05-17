#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    fstream f( "tekst.txt");
    if(f.is_open()){
        string linia;
        int liczba_slow = 0;
    }

    while(getline(f, linia)){
        liczba_slow++;
    }

    f.close();

    cout << "Liczba slow wynosi " << liczba_slow << endl;
    
    return 0;
}