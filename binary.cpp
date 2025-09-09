#include <iostream>
#include <vector>

template<typename T>
int binary_search(const std::vector<T>& data, T target){
    int low, high, mid;
    low = 0;
    high = data.size() -1;

    while (low <= high) {
        mid = low + (high - low) / 2;
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