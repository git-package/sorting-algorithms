#include <iostream>
#include <vector>

void display(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void customSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[j] < arr[i] && arr[j] != 0) {
                std::swap(arr[i], arr[j]);
                display(arr);
            }
        }
    }
}

int main() {
    std::vector<int> numbers = {5, 3, 9, 8, 6, 2, 7, 4, 1};
    
    std::cout << "Initial array: ";
    display(numbers);
    
    customSort(numbers);
    
    return 0;
}
