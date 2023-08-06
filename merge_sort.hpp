#ifndef MERGE
#define MERGE
#include <vector>

template <typename T>
void merge_sort(std::vector<T>& vec, int start, int mid, int end) {
    int first1 = start;
    int last1 = mid;
    int first2 = mid + 1;
    int last2 = end;

    int* tmp = new int[end - start];
    int index = 0;

    while((first1 <= last1) && (first2 <= last2)) {
        if(vec[first1] <= vec[first2]) {
            tmp[index++] = vec[first1++];
        } else {
            tmp[index++] = vec[first2++];
        }
    }

    while(first1 <= last1) {
        tmp[index++] = vec[first1++];
    }

    while(first2 <= last2) {
        tmp[index++] = vec[first2++];
    }

    for(int i = 0; i < end + 1; ++i) {
        vec[i] = tmp[i];
    }
}

#endif
