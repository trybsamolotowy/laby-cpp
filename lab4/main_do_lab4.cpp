#include <iostream>
#include <fstream>
#include <cmath>
#include <cctype>

using namespace std;

void solveQuadratic(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    if (delta >= 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Pierwiastki: " << x1 << ", " << x2 << endl;
    } else {
        cout << "Brak pierwiastkow rzeczywistych." << endl;
    }
}

void capitalizeWords(const string& inputFilename, const string& outputFilename) {
    ifstream inputFile(inputFilename);
    ofstream outputFile(outputFilename);

    if (!inputFile) {
        cout << "Nie mozna otworzyc pliku wejsciowego." << endl;
        return;
    }
    if (!outputFile) {
        cout << "Nie mozna otworzyc pliku wyjsciowego." << endl;
        return;
    }

    string word;
    bool isFirst = true;

    while (inputFile >> word) {
        if (!isFirst) {
            outputFile << " ";
        } else {
            isFirst = false;
        }

        if (!word.empty()) {
            word[0] = toupper(word[0]);
            outputFile << word;
        }
    }

    inputFile.close();
    outputFile.close();

    cout << "Zakonczono. Wynik zapisano do pliku: " << outputFilename << endl;
}

int main() {
    string inputFilename = "equations.txt";
    string outputFilename = "results.txt";
    string capitalizedFilename = "capitalized_results.txt";

    ifstream inputFile(inputFilename);
    ofstream outputFile(outputFilename);

    if (!inputFile) {
        cout << "Nie mozna otworzyc pliku wejsciowego." << endl;
        return 1;
    }
    if (!outputFile) {
        cout << "Nie mozna otworzyc pliku wyjsciowego." << endl;
        return 1;
    }

    double a1, b1, c1, a2, b2, c2;
    int wordCount = 0;
    int blackCharCount = 0;

    while (inputFile >> a1 >> b1 >> c1 >> a2 >> b2 >> c2) {
        double delta1 = b1 * b1 - 4 * a1 * c1;
        double delta2 = b2 * b2 - 4 * a2 * c2;

        outputFile << "Rownanie 1: " << a1 << "x^2 + " << b1 << "x + " << c1 << endl;
        if (delta1 >= 0) {
            outputFile << "Pierwiastki rownania 1: ";
            solveQuadratic(a1, b1, c1);
        } else {
            outputFile << "Brak pierwiastkow rzeczywistych dla rownania 1." << endl;
        }

        outputFile << "Rownanie 2: " << a2 << "x^2 + " << b2 << "x + " << c2 << endl;
        if (delta2 >= 0) {
            outputFile << "Pierwiastki rownania 2: ";
            solveQuadratic(a2, b2, c2);
        } else {
            outputFile << "Brak pierwiastkow rzeczywistych dla rownania 2." << endl;
        }

        outputFile << endl;

        wordCount += 6;
        blackCharCount += 6 * 2;
    }

    inputFile.close();
    outputFile.close();

    cout << "Liczba slow w pliku: " << wordCount << endl;
    cout << "Liczba czarnych znakow (spacje, tabulatory, nowe linie) w pliku: " << blackCharCount << endl;

    capitalizeWords(outputFilename, capitalizedFilename);

    return 0;
}
