# Sorting Algorithms
This repository contains C++ header files implementing various sorting algorithms.
## Table of Contents
- [Bubble](Bubble)
- [Merge](#Merge)
- [Quick](#Quick)
- [Selection](#Selection)
- [How_to_Use](#How_to_Use)

#Bubble
bubble_sort.hpp implements the Bubble Sort algorithm. Bubble Sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until the list is sorted.
#Merge
merge_sort.hpp implements the Merge Sort algorithm. Merge Sort is a divide-and-conquer algorithm that recursively divides the array into halves, sorts them, and then merges them back together.
#Quick
quick_sort.hpp implements the Quick Sort algorithm. Quick Sort selects a pivot element and partitions the array into two sub-arrays, recursively sorting them.
#Selection
selection_sort.hpp implements the Selection Sort algorithm. Selection Sort repeatedly selects the smallest element from the unsorted portion of the array and swaps it with the element at the beginning of the unsorted portion.
#How_to_Use
- Clone this repository or download the individual header files.
- Include the desired sorting algorithm header in your C++ code.
- Create a std::vector of the desired type and populate it with the data you want to sort.
- Call the appropriate sorting function on the vector.
