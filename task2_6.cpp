#include <iostream>
#include <vector>
#include <deque>

int main() {
    // Initialize vector V and deque D
    std::vector<int> V = {1, 2, 3, 4, 5, 6}; // 6 elements
    std::deque<int> D = {10, 20, 30, 40, 50, 60}; // 6 elements

    // Check sizes
    if (V.size() % 2 != 0 || D.size() % 2 != 0) {
        std::cerr << "Both V and D must have an even number of elements." << std::endl;
        return 1;
    }

    // Calculate half size
    size_t halfD = D.size() / 2; // Half size of deque
    size_t halfV = V.size() / 2; // Half size of vector

    // Append the first half of D to the end of V
    V.insert(V.end(), D.begin(), D.begin() + halfD);

    // Append the second half of V (in reverse order) to the beginning of D
    D.insert(D.begin(), V.rbegin(), V.rbegin() + halfV);

    // Output the modified vector V
    std::cout << "Modified Vector V: ";
    for (const auto& elem : V) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Output the modified deque D
    std::cout << "Modified Deque D: ";
    for (const auto& elem : D) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
