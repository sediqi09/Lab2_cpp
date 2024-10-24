#include <iostream>
#include <list>
#include <iterator>

void duplicateFirstHalfL2(std::list<int>& L2) {
    auto halfSize = L2.size() / 2;
    auto halfEnd = std::next(L2.begin(), halfSize);
    
    // Use insert with reverse iterators to append the first half in reverse
    L2.insert(L2.end(), std::make_reverse_iterator(halfEnd), std::make_reverse_iterator(L2.begin()));
}

int main() {
    std::list<int> L2 = {10, 20, 30, 40, 50, 60};
    duplicateFirstHalfL2(L2);
    
    std::cout << "L2 after duplication: ";
    for (int n : L2) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
