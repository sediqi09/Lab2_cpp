#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    std::vector<std::string> L = {"ABC", "DEF", "KLM", "XYZ"};
    
    std::deque<std::string> D;
    
    for (size_t i = 0; i < L.size() - 1; ++i) {
        std::string newString;
        newString += L[i][0]; 
        newString += L[i + 1].back();
        D.push_back(newString);
    }

    for (const auto& str : D) {
        std::cout << str << " ";
    }

    return 0;
}
