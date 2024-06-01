#include <iostream>

using namespace std;

class bigint {
private:
    int liczba;

public:
    bigint(int a) : liczba(a) {}

    ~bigint() {
        cout << "Zniszczono obiekt" << endl;
    }

    bigint operator+(const bigint& other) {
        return bigint(liczba + other.liczba);
    }

    bigint operator-(const bigint& other) {
        return bigint(liczba - other.liczba);
    }

    bigint operator*(const bigint& other) {
        return bigint(liczba * other.liczba);
    }

    bigint operator/(const bigint& other) {
        return bigint(liczba / other.liczba);
    }

    void display() {
        cout << "Wynik wynosi: " << liczba << endl;
    }
};

int main() {

    bigint i(10);
    bigint j(5);

    bigint sum = i + j;
    cout << "Suma: ";
    sum.display();

    bigint diff = i - j;
    cout << "Roznica: ";
    diff.display();

    bigint product = i * j;
    cout << "Iloczyn: ";
    product.display();

    bigint quotient = i / j;
    cout << "Iloraz: ";
    quotient.display();

    return 0;
}
