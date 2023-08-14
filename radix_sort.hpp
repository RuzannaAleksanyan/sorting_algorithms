#ifndef RADIX
#define RADIX

#include <vector>
#include <algorithm>

template <typename T>
T find_max(const std::vector<T>& vec) {
    int max_value = vec[0];
    for(int i = 1; i < vec.size(); ++i) {
        if(vec[i] > max_value) {
            max_value = vec[i];
        }
    }

    return max_value;
}

template <typename T>
void count_sort(std::vector<T>& vec, int exp) {
    std::vector<T> count_vec(10, 0);

    for(int i = 0; i < vec.size(); ++i) {
        count_vec[(vec[i] / exp) % 10]++;
    }

    for(int i = 1; i < 10; ++i) {
        count_vec[i] += count_vec[i - 1];
    }

    std::vector<T> output(vec.size(), 0);


    for (int i = vec.size() - 1; i >= 0; --i) {
        output[count_vec[(vec[i] / exp) % 10] - 1] = vec[i];
        count_vec[(vec[i] / exp) % 10]--;
    }

    for (int i = 0; i < vec.size(); ++i) {
        vec[i] = output[i];
    }

}

template <typename T>
void radix_sort(std::vector<T>& vec) {
    if (vec.empty()) {
        return;
    }

    int max_value = find_max(vec);

    for(int exp = 1; max_value / exp > 0; exp *= 10) {
        count_sort(vec, exp);
    }
}

#endif
