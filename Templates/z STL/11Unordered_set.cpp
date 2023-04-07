#include <iostream>
#include <unordered_set>

int main() {
    // create an unordered_set of integers
    std::unordered_set<int> my_set = { 1, 2, 3, 4, 5 };

    // check if the set is empty
    if (my_set.empty()) {
        std::cout << "Set is empty." << std::endl;
    } else {
        std::cout << "Set contains " << my_set.size() << " elements:" << std::endl;
    }

    // iterate over the set and print each element
    std::cout << "Elements in set:";
    for (auto it = my_set.begin(); it != my_set.end(); ++it) {
        std::cout << " " << *it;
    }
    std::cout << std::endl;

    // insert a new element into the set
    my_set.insert(6);

    // check if an element is in the set
    int search_elem = 3;
    if (my_set.count(search_elem)) {
        std::cout << "Element " << search_elem << " is in the set." << std::endl;
    } else {
        std::cout << "Element " << search_elem << " is not in the set." << std::endl;
    }

    // remove an element from the set
    int remove_elem = 4;
    my_set.erase(remove_elem);

    // check if an element was removed
    if (my_set.count(remove_elem)) {
        std::cout << "Element " << remove_elem << " was not removed from the set." << std::endl;
    } else {
        std::cout << "Element " << remove_elem << " was removed from the set." << std::endl;
    }

    // clear the set
    my_set.clear();

    // check if the set is empty after clearing
    if (my_set.empty()) {
        std::cout << "Set is now empty." << std::endl;
    } else {
        std::cout << "Set still contains " << my_set.size() << " elements." << std::endl;
    }

    return 0;
}
