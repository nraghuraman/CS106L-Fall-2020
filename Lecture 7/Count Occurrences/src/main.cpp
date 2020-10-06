#include <iostream>     // for cout, cin
#include <vector>       // for vector
#include <list>         // for list

template <typename Iter, typename ElemType>
int count_occurrences(Iter begin, Iter end, const ElemType& val) {
    int count = 0;
    for (auto iter = begin; iter != end; ++iter) {
        if (*iter == val) ++count;
    }
    return count;
}

int main() {
    std::vector<int> vec{5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    std::list<double> list{4.7, 3, 4, 3.7, 4.7, 2.9, 4.7};
    std::string s{"Hello world!"};

    // TODO: Count how many times 3 appears in a vector<int> (answer is 10)
    std::cout << count_occurrences(vec.begin(), vec.end(), 3) << std::endl;
    // TODO: Count how many times 4.7 appears in a list<double> (answer is 3)
    std::cout << count_occurrences(list.begin(), list.end(), 4.7) << std::endl;
    // TODO: Count how many times ‘X’ appears in a string (answer is 0)
    std::cout << count_occurrences(s.begin(), s.end(), 'X') << std::endl;
    // TODO: Count how many times 5 appears in the second half of a vector<int> (answer is 1)
    std::cout << count_occurrences(vec.begin() + vec.size() / 2, vec.end(), 5) << std::endl;
}
