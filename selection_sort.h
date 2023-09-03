#ifndef SELECTION
#define SELECTION
#include <vector>

template <typename T>
void selection_sort(std::vector<T>& vec) {
    if (vec.empty()) {
        return;
    }
    
    for(int i = 0; i < vec.size(); ++i) {
        int min = i;
        for(int j = i + 1; j < vec.size(); ++j) {
            if(vec[j] < vec[min]) {
                min = j;
            }
        }
        
        if(i != min) {
            T tmp = vec[i];
            vec[i] = vec[min];
            vec[min] = tmp;
        }
    }
}

#endif
