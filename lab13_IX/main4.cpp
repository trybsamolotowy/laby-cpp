#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main(){

    vector<string> v = {"mandarynka", "ul", "majonez"};

    int liczenie = count_if(v.begin(), v.end(), [](string& s) { return s.size() > 5; });
    cout << "Wyrazy, ktore maja wiecej znakow niz 5: " << liczenie << '\n';

    return 0;

}