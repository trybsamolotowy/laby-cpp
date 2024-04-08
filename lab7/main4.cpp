#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<char> alfabet;
    for(char i = 'a'; i <= 'z'; i++){
    //cout << i << endl;
    alfabet.push_back(i);
    }

    for(char i : alfabet){
        cout << i << endl;
    } 


}