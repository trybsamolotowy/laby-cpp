#include <iostream>
using namespace std;

class hello {
private:
    string msg;  // Prywatne pole msg

public:
    hello(string a) : msg(a) {}  // Publiczny konstruktor z parametrem do inicjalizacji pola msg
    hello() : msg("Hello") {}  // Domyślny konstruktor

    virtual string toString() const {  // Publiczna wirtualna metoda toString(), zwracająca pole msg obiektu
        return msg;
    }

    void display() {
        cout << msg << endl;
    }
};

class world : public hello {  // Dziedziczenie publiczne, umożliwiające dostęp do składowych klasy bazowej
private:
    string msg2;  // Prywatne pole msg2

public:
    world(string a, string b) : hello(a), msg2(b) {  // Publiczny konstruktor z parametrami do inicjalizacji pól msg i msg2
        // Inicjalizacja pola msg klasy bazowej za pomocą hello(a)
        // Inicjalizacja pola msg2 za pomocą msg2(b)
    }

    string toString() const override {  // Publiczna metoda toString(), zwracająca łańcuch złożony z wartości pól msg i msg2, oddzielonych spacją
        return hello::toString() + " " + msg2;
    }
};

int main() {
    hello h1;  // Błąd: 'hello h1();' deklaruje funkcję zamiast tworzyć obiekt. Poprawiono na 'hello h1;'
    hello h2("Hello World");
    h2.display();

    world w1("Hello", "World");  // Poprawiono konstruktor klasy world do inicjalizacji dwóch pól
    cout << w1.toString() << endl;  // Wyświetlenie połączonego msg z klasy bazowej i pochodnej

    return 0;
}
