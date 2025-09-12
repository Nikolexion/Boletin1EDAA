#include <iostream>
#include <vector>

template<typename T>
int sequential_search(const std::vector<T>& data, T target) {
    for (auto& item : data) {
        if (item == target) {
            return &item - &data[0];
        }
    }
    return -1;
}