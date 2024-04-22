#include <iostream>
#include <algorithm> 
using namespace std;

class Fraction {
private: 
    int num, den;

public:
    Fraction(int a = 0, int b = 1): num(a), den(b) {}

    friend ostream& operator<<(ostream& os, const Fraction& f);
    friend istream& operator>>(istream& is, Fraction& f);
    friend Fraction operator+(const Fraction& f1, const Fraction& f2);
    friend Fraction operator-(const Fraction& f1, const Fraction& f2);
    friend Fraction operator*(const Fraction& f1, const Fraction& f2);
    friend Fraction operator/(const Fraction& f1, const Fraction& f2);

    void simplify();

    int gcd(int a, int b) { 
        return b == 0 ? a : gcd(b, a % b); 
    }
};

ostream& operator<<(ostream& os, const Fraction& f) {
    if (f.num == 0 || f.den == 0)
        os << "Zero!";
    else
        os << f.num << "/" << f.den;
    return os;
}

istream& operator>>(istream& is, Fraction& f) {
    is >> f.num >> f.den;
    return is;
}

Fraction operator+(const Fraction& f1, const Fraction& f2) {
    int new_num = f1.num * f2.den + f2.num * f1.den;
    int new_den = f1.den * f2.den;
    Fraction result(new_num, new_den);
    result.simplify();
    return result;
}

Fraction operator-(const Fraction& f1, const Fraction& f2) {
    int new_num = f1.num * f2.den - f2.num * f1.den;
    int new_den = f1.den * f2.den;
    Fraction result(new_num, new_den);
    result.simplify();
    return result;
}

Fraction operator*(const Fraction& f1, const Fraction& f2) {
    int new_num = f1.num * f2.num;
    int new_den = f1.den * f2.den;
    Fraction result(new_num, new_den);
    result.simplify();
    return result;
}

Fraction operator/(const Fraction& f1, const Fraction& f2) {
    int new_num = f1.num * f2.den;
    int new_den = f1.den * f2.num;
    Fraction result(new_num, new_den);
    result.simplify();
    return result;
}

void Fraction::simplify(){
    int common = gcd(num,den);
    num /= common;
    den /= common;
}

int main() {
    Fraction f1(1, 2), f2(1, 2);

    cout << "f1: " << f1 << endl;
    cout << "f2: " << f2 << endl;

    Fraction dodawanie = f1 + f2;
    cout << "f1 + f2: " << dodawanie << endl;

    Fraction odejmowanie = f1 - f2;
    cout << "f1 - f2: " << odejmowanie << endl;

    Fraction mnozenie = f1 * f2;
    cout << "f1 * f2: " << mnozenie << endl;

    Fraction dzielenie = f1 / f2;
    cout << "f1 / f2: " << dzielenie << endl;

    return 0;
}
