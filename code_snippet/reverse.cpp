#include <iostream>

using namespace std;


int main(){

    string tab[3] = {"a", "b", "c"};

  
    cout << tab[0] << endl;
    cout << tab[1] << endl;
    cout << tab[2] << endl;
  

    for(int i=2;i>=0;i--){
        cout << tab[i] << endl;
    }


}