#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<double> liczby = {2.3, 4.55, 6.77, 6.8};
    cout << "Rozmiar przed czyszczeniem: " << liczby.size() << endl;
    liczby.clear();
    cout << "Rozmiar po czyszczeniem: " << liczby.size() << endl;

}