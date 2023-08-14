#ifndef INSERTION
#define INSERTION
#include <vector>

template <typename T>
void insertion_sort(std::vector<T>& vec) {
    if (vec.empty()) {
        return;
    }
    
    int i, key, j;
    for (i = 1; i < vec.size(); i++) {
        key = vec[i];
        j = i - 1;

        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j = j - 1;
        }
        vec[j + 1] = key;
    }
}

#endif
