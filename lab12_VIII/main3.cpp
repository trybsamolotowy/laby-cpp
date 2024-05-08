#include <iostream>
#include <algorithm>

using namespace std;

template<typename T, int N>
void sortuj(T (&a)[N]){
    sort(a, a + N);
}

int main(){
    int a[5] = {1, 4, 3, 2, 5};
    
    sortuj(a);
    
    for (int i = 0; i < 5; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
