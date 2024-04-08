#include <iostream>
#include <vector>

using namespace std;

int main(){

vector<string> dni_tygodnia = {"poniedzialek", "wtorek", "sroda", "czwartek", "piatek"};

for(string i : dni_tygodnia){
    cout << i << endl;
}

dni_tygodnia.push_back("sobota");
dni_tygodnia.push_back("niedziela");

for(string i : dni_tygodnia){
    cout << i << endl;
}



}