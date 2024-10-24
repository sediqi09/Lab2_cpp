#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream inputFile("name.txt");
    if (!inputFile) {
        std::cerr << "Unable to open file name.txt" << std::endl;
        return 1;
    }

    std::vector<int> numbers;
    int number;
    while (inputFile >> number) {
        numbers.push_back(number);
    }
    inputFile.close();

    std::cout << "Numbers at odd ordinal positions: " << std::endl;
    for (std::size_t i = 0; i < numbers.size(); ++i) {
        if (i % 2 == 0) { // 0-based index, so even indices correspond to odd positions
            std::cout << numbers[i] << std::endl;
        }
    }

    return 0;
}
