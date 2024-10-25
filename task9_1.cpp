#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int countVectorsContainingV0(const std::vector<int>& V0, const std::vector<std::vector<int>>& vectors) {
    std::set<int> setV0(V0.begin(), V0.end());       // Create a set from V0 to remove duplicates
    
    int count = 0;

    for (const auto& vec : vectors) {
        std::set<int> setVi(vec.begin(), vec.end());

        if (std::includes(setVi.begin(), setVi.end(), setV0.begin(), setV0.end())) {   // Check if setVi contains all elements of setV0

            count++;
        }
    }

    return count;
}

int main() {
    std::vector<int> V0 = {1, 2, 3};
    std::vector<std::vector<int>> vectors = {
        {1, 2, 3, 4},
        {1, 2},
        {3, 2, 1, 5},
        {1, 2, 3, 3, 4},
        {4, 5, 6}
    };

    int result = countVectorsContainingV0(V0, vectors);
    std::cout << "Number of vectors containing all elements of V0: " << result << std::endl;

    return 0;
}
