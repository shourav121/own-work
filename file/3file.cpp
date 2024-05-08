#include <iostream>
#include <vector>

// Partition function to partition the array into two parts
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];  // Pivot element (last element)
    int i = low - 1;  // Index of smaller element

    for (int j = low; j < high; ++j) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            ++i;  // Increment index of smaller element
            std::swap(arr[i], arr[j]);  // Swap current element with arr[i]
        }
    }
    std::swap(arr[i + 1], arr[high]);  // Swap pivot with element at i + 1
    return i + 1;  // Return the partitioning index
}

// QuickSort function to perform the sorting
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partitioning index
        int pi = partition(arr, low, high);

        // Recursively sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    std::vector<int> arr = {64, 25, 12, 22, 11};

    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    quickSort(arr, 0, arr.size() - 1);

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
