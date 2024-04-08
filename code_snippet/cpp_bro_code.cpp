#include<iostream>
#include <vector>

using namespace std;

namespace first{
    int x = 9;
}

typedef vector<int> vector_int;
int main(){

    vector_int v;

    v.push_back(120);
    v.push_back(2);
    v.clear();
    v.push_back(3);


    for(auto x : v)
        cout << x << endl;


    int x = 1;

    int suma = x + first::x;

    // cout << suma << endl;

    int time  = 21;

    string result = (time < 10) ? "Good morning" : "Good evening";

    cout << result << endl;

    return 0;


}