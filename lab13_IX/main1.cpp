#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

vector<int> numbers = { 1, 2, 30, 4, 5 };

    numbers.erase(remove_if(numbers.begin(), numbers.end(), [](int num) {
        return num <= 10;
    }), numbers.end());

    
    for (int num : numbers) {
        cout << num << " ";
    }

return 0;

}