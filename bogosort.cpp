#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

bool isSorted(const std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void bogosort(std::vector<int>& arr) {
    std::random_device rd;
    std::mt19937 g(rd());
    
    while (!isSorted(arr)) {
        std::shuffle(arr.begin(), arr.end(), g);
        for (const auto& val : arr) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<int> arr = {3, 4, 1, 2, 5};
    bogosort(arr);
    return 0;
}
