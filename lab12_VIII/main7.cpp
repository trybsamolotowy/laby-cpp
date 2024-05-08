#include <iostream>
#include <algorithm>

using namespace std;

template<typename T, int N, int H>
void scalanie(T (&a)[N], T(&b)[H]){
   int rozmiar = N + H;
   T tablica_wynikowa[rozmiar];

   copy(a, a + N, tablica_wynikowa);
   copy(b, b + H, tablica_wynikowa + N);

   sort(tablica_wynikowa, tablica_wynikowa + rozmiar);
   for(int i = 0; i < 10; i++){
        cout << tablica_wynikowa[i] << " " << endl;
    }
}

int main(){
    int a[] = {5, 4, 3, 2, 1};
    int b[] = {1, 2, 3, 4, 5};

    scalanie(a,b);

    return 0;
}
