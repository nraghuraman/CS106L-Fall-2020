#include <iostream>     // for cout, cin

// TODO: Declare my_min function
template <typename T>
T my_min(const T& a, const T& b);

int main() {
    int min = my_min(3, 4);
    std::cout << min << std::endl;
    return 0;
}

// TODO: Implement my_min function
template <typename T>
T my_min(const T& a, const T& b) {
    return a < b ? a : b;
}
