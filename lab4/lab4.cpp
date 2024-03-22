#include <iostream>
#include <fstream>
#include <string>
#include <locale>
#include <codecvt>
#include <Windows.h>


using namespace std;

int main(){

    /*
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    ifstream file("nie_ma_pliku.txt");
    ifstream file1("plik.txt");

    if(!file){
        cerr << "Nie mżna otworzyć pliku do odczytu." << endl;
    }

    //zapis do pliku
    ofstream outfile("plik.txt");
    outfile << "Helloo world!" << endl;
    outfile.close();
    // odczyt z pliku
    ifstream infile("plik.txt");
    string line;

        while(getline(infile, line)) {
            cout << line << endl;
        }

    infile.close();
    */

    ifstream file("plik.txt");
    string line;

        while (getline(file, line)) {
            
           
        }
   }