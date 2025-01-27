#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Using iterators to traverse the vector
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " "; // Dereferencing the iterator to access the element
    }
    std::cout << std::endl;

    return 0;
}
