#include <iostream>

using namespace std;


template<typename... Args>
void sumAndAverage(Args... args){
    double suma = (args + ...);
    double srednia = suma/sizeof...(args);
    cout << "Suma: " << suma << endl;
    cout << "Srednia: " << srednia << endl;

}


int main(){

sumAndAverage(5.0,5.0,5.0,5.0);


return 0;

}