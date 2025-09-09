#include <iostream>
#include <vector>

template<typename T>
int galloping_search(const std::vector<T>& data, T target){
    // Verificamos casos base
    if (target < data[0]) {
        return -1;
    } else if (target == data[0]) {
        return 0;
    }
    
    int index = 1;
    size_t size = data.size();
    while (index < size && data[index] <= target) {
        index *= 2;
    }

    int low = index / 2;
    int high;

    if (index < size){
        high = index;
    } else {
        high = size - 1;
    }

    // Iniciamos busqueda binaria
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (data[mid] == target) {
            return mid;
        } else if (data[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}