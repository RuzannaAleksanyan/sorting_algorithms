#include <iostream>
#include <vector>
#include <algorithm> // For std::is_sorted
#include "bubble_sort.hpp"
#include "merge_sort.hpp"
#include "quick_sort.hpp"
#include "selection_sort.hpp"

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

    // Test Quick Sort
    std::vector<int> quick_sorted = data;
    quick_sort(quick_sorted, 0, quick_sorted.size() - 1);
    std::cout << "Quick Sort: " << (is_sorted(quick_sorted) ? "Passed" : "Failed") << std::endl;

    // Test Selection Sort
    std::vector<int> selection_sorted = data;
    selection_sort(selection_sorted);
    std::cout << "Selection Sort: " << (is_sorted(selection_sorted) ? "Passed" : "Failed") << std::endl;

    return 0;
}