#ifndef QUICK
#define QUICK
#include <vector>

template <typename T>
void swap(T& num1, T& num2) {
    T tmp = num1;
    num1 = num2;
    num2 = tmp;
}

template <typename T>
int partition(std::vector<T>& vec, int start, int end) {
    if (vec.empty()) {
        return;
    }
    
    int pivot = start + rand() % (end - start + 1);
    swap(vec[pivot], vec[start])
    int i = start - 1;
    for(int j = start; j <= end - 1; ++j) {
        if(vec[j] <= pivot) {
            ++i;
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[i + 1], vec[end]);
    return i;
}

template <typename T>
void quick_sort(std::vector<T>& vec, int start, int end) {
    if(start < end) {
        int pi = partition(vec, start, end);
        quick_sort(vec, start, pi - 1);
        quick_sort(vec, pi + 1, end);
    }
}

#endif
