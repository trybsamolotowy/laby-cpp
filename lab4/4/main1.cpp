#include <iostream>
#include <cmath>

using namespace std;

float pierw(float a){
    return sqrt(a);
}

float pierw(float a, float b){
    return pow(a, 1/b);
}


int main(){

for(int i = 1; i<6; i++){
    cout << pierw(i) << endl;
   
}

for(int i = 1; i<6; i++){

cout << pierw(i, 3) << endl;
}

}