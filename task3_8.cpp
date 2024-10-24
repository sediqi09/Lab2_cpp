#include <iostream>
#include <vector>

int main() {
    // Initialize a vector with some values
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Print the original vector
    std::cout << "Original vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Create an iterator for the vector
    auto it = vec.begin();
    // Use a loop to iterate through the vector
    for (int index = 1; it != vec.end(); ++index) {
        // Check if the current index is odd
        if (index % 2 != 0) {
            // Erase the element at the iterator position and update the iterator
            it = vec.erase(it);
        } else {
            // Move to the next element only if we didn't erase
            ++it;
        }
    }

    // Print the modified vector
    std::cout << "Modified vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
