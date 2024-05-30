#include <iostream>
#include <vector>
#include <ranges>

using namespace std;

template<typename Container, typename Predicate>
auto filter(const Container& container, Predicate predicate) {
    return container | std::ranges::views::filter(predicate);
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    auto filtered = filter(numbers, [](int num) { return num % 2 == 0; });

    for (int num : filtered) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
