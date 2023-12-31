# Sorting Algorithms
This repository contains C++ header files implementing various sorting algorithms.
## Table of Contents
- [Bubble](#Bubble)
- [Merge](#Merge)
- [Quick](#Quick)
- [Selection](#Selection)
- [Insertion](#Insertion)
- [Radix](#Radix)
- [Counting](#Counting)
- [Bucket](#Bucket)
- [Heap](#Heap)
- [How_to_Use](#How_to_Use)
- [Test](#Test)

## Bubble
bubble_sort.hpp implements the Bubble Sort algorithm. Bubble Sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until the list is sorted.
## Merge
merge_sort.hpp implements the Merge Sort algorithm. Merge Sort is a divide-and-conquer algorithm that recursively divides the array into halves, sorts them, and then merges them back together.
## Quick
quick_sort.hpp implements the Quick Sort algorithm. Quick Sort selects a pivot element and partitions the array into two sub-arrays, recursively sorting them.
## Selection
selection_sort.hpp implements the Selection Sort algorithm. Selection Sort repeatedly selects the smallest element from the unsorted portion of the array and swaps it with the element at the beginning of the unsorted portion.
## Insertion
Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is based on the idea of dividing the input array into two subarrays: a sorted region and an unsorted region. The algorithm iterates through the unsorted region, taking one element at a time and placing it in its correct position within the sorted region. This process continues until the entire array is sorted.
## Radix
Radix Sort is a non-comparative sorting algorithm that sorts elements by their individual digits or characters. It is particularly efficient for sorting integers  with fixed-length representations.
## Counting
Counting Sort is a sorting algorithm that works well for integers when the range of values is relatively small. It is a non-comparative sorting algorithm that uses a frequency-counting approach to sort elements efficiently.
## Bucket 
Bucket sort is a sorting algorithm that divides the input list into a number of equally sized buckets. Each bucket is then sorted individually, either using another sorting algorithm or by recursively applying bucket sort if the range of values within a bucket is too large. Finally, the sorted buckets are concatenated to obtain the sorted output.
## Heap
Heap Sort is a popular in-place sorting algorithm known for its efficiency and guaranteed O(n log n) time complexity. It works by transforming the input array into a binary heap and then repeatedly removing the maximum (for ascending order) or minimum (for descending order) element from the heap until the heap is empty.
## How_to_Use
- Clone this repository or download the individual header files.
- Include the desired sorting algorithm header in your C++ code.
- Create a std::vector of the desired type and populate it with the data you want to sort.
- Call the appropriate sorting function on the vector.
## Test
The test.cpp file checks the correctness of all functions.
