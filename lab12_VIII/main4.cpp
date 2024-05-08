#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template<typename T>
void swap(vector<T>&a){
    swap(a[0],a[1]);
}


int main(){
    vector <int> wektor1({1, 4});
    
    swap(wektor1);

   for(int i = 0; i < size(wektor1); i++){

    cout << wektor1[i] << " " << endl;

   }

    return 0;
}
