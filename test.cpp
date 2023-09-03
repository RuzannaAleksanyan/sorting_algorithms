#include <iostream>
#include <vector>
#include <algorithm> // For std::is_sorted
#include "bubble_sort.h"
#include "merge_sort.h"
// #include "quick_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "bucket_sort.h"
#include "heap_sort.h"
#include "counting_sort.h"
#include "radix_sort.h"

// Helper function to check if a vector is sorted
template <typename T>
bool is_sorted(const std::vector<T>& vec) {
    return std::is_sorted(vec.begin(), vec.end());
}

int main() {
    std::vector<int> data = {5, 2, 8, 1, 3};
    
    // Test Bubble Sort
    std::vector<int> bubble_sorted = data;
    bubble_sort(bubble_sorted);
    std::cout << "Bubble Sort: " << (is_sorted(bubble_sorted) ? "Passed" : "Failed") << std::endl;

    // Test Merge Sort
    std::vector<int> merge_sorted = data;
    merge_sort(merge_sorted, 0, merge_sorted.size() - 1);
    std::cout << "Merge Sort: " << (is_sorted(merge_sorted) ? "Passed" : "Failed") << std::endl;

    // // Test Quick Sort
    // std::vector<int> quick_sorted = data;
    // quick_sort(quick_sorted, 0, quick_sorted.size() - 1);
    // std::cout << "Quick Sort: " << (is_sorted(quick_sorted) ? "Passed" : "Failed") << std::endl;

    // Test Selection Sort
    std::vector<int> selection_sorted = data;
    selection_sort(selection_sorted);
    std::cout << "Selection Sort: " << (is_sorted(selection_sorted) ? "Passed" : "Failed") << std::endl;

    //Test Insertion Sort
    std::vector<int> insertion_sorted = data;
    insertion_sort(insertion_sorted);
    std::cout << "Insertion Sort: " << (is_sorted(insertion_sorted) ? "Passed" : "Failed") << std::endl;

    //Test Radix Sort
    std::vector<int> radix_sorted = data;
    radix_sort(radix_sorted);
    std::cout << "Radix Sort: " << (is_sorted(radix_sorted) ? "Passed" : "Failed") << std::endl;

    //Test Counting Sort
    std::vector<int> counting_sorted = data;
    counting_sort(counting_sorted);
    std::cout << "Counting Sort: " << (is_sorted(counting_sorted) ? "Passed" : "Failed") << std::endl;

    //Test Bucket Sort
    std::vector<int> bucket_sorted = data;
    bucket_sort(bucket_sorted);
    std::cout << "Bucket Sort: " << (is_sorted(bucket_sorted) ? "Passed" : "Failed") << std::endl;

    //Test Counting Sort
    std::vector<int> counting_sort = data;
    counting_sort(counting_sort);
    std::cout << "Counting Sort: " << (is_sorted(counting_sort) ? "Passed" : "Failed") << std::endl;

    //Test Radix Sort
    std::vector<int> radix_sort = data;
    radix_sort(radix_sort);
    std::cout << "Radix Sort: " << (is_sorted(radix_sort) ? "Passed" : "Failed") << std::endl;

    //Test Heap Sort
    const int size = 5;
    int* heap_sort = new int[size];

    heap_sort[0] = 4;
    heap_sort[1] = 6;
    heap_sort[2] = 7;
    heap_sort[3] = 5;
    heap_sort[4] = 9;

    heap_sort(heap_sort, size);

    for(int i = 0; i < size; ++i) {
        std::cout << heap_sort[i] << " ";
    }
    std::cout << std::endl;

    delete[] heap_sort;

    return 0;
}
