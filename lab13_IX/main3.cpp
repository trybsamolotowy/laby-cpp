#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3};

    
    auto sum_of_numbers = [&numbers]() {
        return accumulate(numbers.begin(), numbers.end(), 0);
    };

    
    int sum = sum_of_numbers();

    
    cout << "Sum: " << sum << endl;

    return 0;
}
