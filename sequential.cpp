#include <iostream>
#include <vector>

template<typename T>
void sequential_search(const std::vector<T>& data, T target) {
    for (auto& item : data) {
        if (item == target) {
            std::cout << "Encontrado: " << target << std::endl;
            return;
        }
    }
    std::cout << "No encontrado: " << target << std::endl;
}