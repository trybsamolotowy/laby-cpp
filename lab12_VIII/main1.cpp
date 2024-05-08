#include <iostream>

using namespace std;

template<typename T>
T Dodaj(T a[], int n){
    T sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int main(){

    int a[5]={1,2,3,4,5};
    cout << Dodaj(a,5) << endl;
    return 0;

}