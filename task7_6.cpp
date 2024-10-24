#include <iostream>
#include <list>
#include <algorithm>

void rearrangeList(std::list<int>& L) {
    // Use stable_partition to rearrange elements
    std::stable_partition(L.begin(), L.end(), [](int x) {
        return x > 0;
    });
}

int main() {
    std::list<int> L = {3, -1, 2, 0, -4, 5, -2, 1};

    rearrangeList(L);
    
    std::cout << "Rearranged list: ";
    for (int n : L) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
