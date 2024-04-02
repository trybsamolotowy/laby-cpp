#include <iostream>

using namespace std;


int main(){

    int tab[3] = {1,2,3};

  
    cout << tab[0] << endl;
    cout << tab[1] << endl;
    cout << tab[2] << endl;
  

    swap(tab[0],tab[2]);

    for(int i=0;i<3;i++){
        cout << tab[i] << endl;
    }
}