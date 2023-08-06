#ifndef BUBBLE
#define BUBBLE
#include <vector>

template <typename T>
void bubble_sort(std::vector<T>& vec) {
    bool sorted = false;

    for (int i = 0; i < vec.size(); ++i) {
        sorted = true;

        for (int j = 0; j < vec.size() - 1 - i; ++j) { 
            if (vec[j] > vec[j + 1]) {
                std::swap(vec[j], vec[j + 1]);
                sorted = false;
            }
        }

        if (sorted) {
            break;
        }
    }
}

#endif
