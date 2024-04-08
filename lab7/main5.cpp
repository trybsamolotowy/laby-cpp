#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<string> kolory = {"czerwony", "niebieski", "fioletowy", "zielony","czarny"};
    
    auto miejsce_koloru = find(kolory.begin(), kolory.end(), "niebieski");

    
    if (miejsce_koloru != kolory.end()) {
        kolory.erase(miejsce_koloru); 
    }

    for(auto it = kolory.begin(); it != kolory.end(); ++it){
        cout << *it << endl;
    }
  
}