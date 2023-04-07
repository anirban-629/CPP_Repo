#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // Find the element 3 in the vector
    auto it = std::find(myVector.begin(), myVector.end(), 3);

    // Check if the element was found
    if (it != myVector.end()) {
        std::cout << "Element found at index " << std::distance(myVector.begin(), it) << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
