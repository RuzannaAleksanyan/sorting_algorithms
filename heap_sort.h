#ifndef HEAPSORT
#define HEAPSORT

#include <iostream>

int left(int index) {
    return 2 * index + 1;
}

int right(int index) {
    return 2 * index + 2;
}

void max_heapify(int* arr, int i, int size) {
    if(i < 0 || i >= size) {
        return;
    }

    int l = left(i);
    int r = right(i);
    int largest = i;

    if(l < size && arr[l] > arr[largest]) {
        largest = l;
    }

    if(r < size && arr[r] > arr[largest]) {
        largest = r;
    }

    if(largest != i) {
        std::swap(arr[largest], arr[i]);
        max_heapify(arr, largest, size);
    }   
}

void build_max_heap(int* arr, int size) {
    for(int i = size / 2 - 1; i >= 0; --i) {
        max_heapify(arr, i, size);
    }
}

void heap_sort(int* arr, int size) {
    build_max_heap(arr, size);
    for(int i = size - 1; i >= 0; --i) {
        std::swap(arr[0], arr[i]);
        max_heapify(arr, 0, i);
    }
}

#endif
