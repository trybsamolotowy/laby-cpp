#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;


void rownanie_kwadratowe(int a, int b, int c, ostream& out){
    float delta = b*b - 4* a * c;
    out << "Rownanie: " << a << "x^2 + " << b << "x + " << c << " = 0\n";
    if(delta > 0){
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);
        out << "x1 = " << x1 << endl;
        out << "x2 = " << x2 << endl;
    }else if (delta == 0){
        float x = -b / (2*a);
        out << "x = " << x << endl;
    }else{
        out << "Delta mniejsza niz 0." << endl;
    }
    out << endl;
}

int main(){
    fstream inputFile("plik.txt");
    fstream outputFile("wynik.txt");

    if(!inputFile){
        cerr << "Unable to open input file" << endl;
    }

    if(!outputFile){
        cerr << "Unable to open output file" << endl;
    }

    vector<vector<int>> zmienne;
    int a, b, c;

    while(inputFile >> a >> b >> c){
        zmienne.push_back({a, b, c});
    }

    for(const auto& zmienna : zmienne){
        rownanie_kwadratowe(zmienna[0], zmienna[1], zmienna[2], cout);
        rownanie_kwadratowe(zmienna[0], zmienna[1], zmienna[2], outputFile);
    }

    inputFile.close();
    outputFile.close();
}