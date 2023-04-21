#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5,3};
    int to_remove = 3;
    
    std::cout << "Before remove: ";
    for (int i : v) {
        std::cout << i << " ";
    }
    auto new_end = std::remove(v.begin(), v.end(), to_remove);
    
    std::cout << std::endl;

    std::cout << "After Single remove: ";
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    
    v.erase(new_end, v.end());
    
    std::cout << "After remove: ";
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    return 0;
}