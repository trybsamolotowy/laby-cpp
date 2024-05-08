#include <iostream>
#include <algorithm>

using namespace std;

template<typename T, int N>
void jak_posortowana(T (&a)[N]){
    bool ascending = true;
    bool descending = true;

    for(int i = 0; i < N - 1; i++) {
        if(a[i] > a[i+1]) {
            ascending = false;
        } else if(a[i] < a[i+1]) {
            descending = false;
        }
    }

    if (ascending) {
        cout << "Tablica posortowana rosnaco" << endl;
    } else if (descending) {
        cout << "Tablica posortowana malejaco" << endl;
    } else {
        cout << "Tablica nie jest posortowana" << endl;
    }
}

int main(){
    int a[] = {5, 4, 3, 2, 1};
    jak_posortowana(a);
    return 0;
}
