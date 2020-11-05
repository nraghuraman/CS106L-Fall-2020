#include <memory>
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::unique_ptr<int[]> my_array = std::make_unique<int[]>(3);
    // TODO: Initialize array elements
    my_array[0] = 2;
    my_array[1] = 3;
    my_array[4] = 5;

    std::unique_ptr<int> ptr = std::make_unique<int>(2);
    // TODO: Print out the pointer value
    std::cout << "Pointer value " << *ptr << std::endl;

    // TODO: use a unique_ptr to heap-allocate a vector with elements {"hello!", "hello!", "hello!"}
    // and print out all elements
    auto vec_ptr = std::make_unique<std::vector<std::string>>(3, "hello!");
    std::copy(vec_ptr->begin(), vec_ptr->end(), std::ostream_iterator<std::string>(std::cout, "\n"));

    return 0;
}
