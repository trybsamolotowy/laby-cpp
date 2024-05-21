#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){

    
    vector<string> v = {"mandarynka", "ul", "majonez"};

    sort(v.begin(), v.end(), [](string& a, string& b){
        return a < b ;
    });

    for(string& str : v){
        cout << str << " " <<endl;
    }

    cout << endl;
    
    return 0;

}