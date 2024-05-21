#include <iostream>
using namespace std;

template <typename T>
T findMax(T first) {
    return first;
}

template <typename T, typename... Args>
T findMax(T first, Args... args) {
    T maxRest = findMax(args...);
    return (first > maxRest) ? first : maxRest;
}

template <typename... Args>
void printmax(Args... args) {
    auto maxValue = findMax(args...);
    cout << "Najwieksza liczba: " << maxValue << endl;
}

int main() {
    printmax(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    return 0;
}
