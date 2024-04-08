#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<float> liczby = {1.222, 2.453, 2.6, 2.7777};

    /*
    for( float i : liczby){
        cout << i << endl;
    }
    */

    liczby.front() = liczby[0]+1;
    liczby.back() = liczby[3]-1;
    

    for( float i : liczby){
        cout << i << endl;
    }

}