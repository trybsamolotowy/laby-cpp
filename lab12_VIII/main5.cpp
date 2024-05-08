#include <iostream>
#include <algorithm>

using namespace std;

template<typename T, int N>
void srednia(T (&a)[N]){
    float sum = 0;
    for(int i = 0; i < N ; i++){
        sum += a[i];
    }
    float wynik = sum/N;

    cout << "Srednia arytmetyczna: " << wynik << endl;
}

int main(){
    int a[5] = {1, 4, 3, 2, 5};
    
    srednia(a);
    
    return 0;
}
