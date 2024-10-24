#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

int main() {
    std::ifstream inputFile("numbers.txt");
    if (!inputFile) {
        std::cerr << "Unable to open file numbers.txt";
        return 1;
    }

    std::vector<int> V;
    int number;

    while (inputFile >> number) {
        V.push_back(number); // Store each number in the vector
    }

    inputFile.close();

    std::cout << "Elements in original order:" << std::endl;

    for (const auto& num : V) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}