#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;


int main(){

vector<string> sentence;
sentence.push_back("Ala ma kota");

auto to_upper = [](string s){
    
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    
    return s;

};

for(auto& s : sentence){
    s = to_upper(s);
}


for(int i = 0; i < 3; i++){
    cout << sentence[i] << " ";
}

return 0;

}