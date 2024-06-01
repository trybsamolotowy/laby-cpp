#include <iostream>

using namespace std;

class fraction {
private:
    int num, den;

public:
    fraction(int n, int d) : num(n), den(d) {}

    ~fraction() {
        cout << "Destruktor zostal wywolany" << endl;
    }

    fraction operator+(const fraction& other) const {
        return fraction(num * other.den + other.num * den, den * other.den);
    }

    fraction operator-(const fraction& other) const {
        return fraction(num * other.den - other.num * den, den * other.den);
    }

    fraction operator*(const fraction& other) const {
        return fraction(num * other.num, den * other.den);
    }

    fraction operator/(const fraction& other) const {
        return fraction(num * other.den, den * other.num);
    }

    void display() const {
        cout << num << "/" << den << endl;
    }
};

int main() {
    fraction u1(1, 2);
    fraction u2(2, 3);

    cout << "u1 + u2 = ";
    (u1 + u2).display();

    cout << "u1 - u2 = ";
    (u1 - u2).display();

    cout << "u1 * u2 = ";
    (u1 * u2).display();

    cout << "u1 / u2 = ";
    (u1 / u2).display();

    return 0;
}
