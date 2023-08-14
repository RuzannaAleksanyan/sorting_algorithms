#ifndef COUNTING
#define COUNTING

#include <vector>
#include <algorithm>

template <typename T>
T max_element(const std::vector<T>& vec) {
    T max_value = vec[0];

    for(int i = 1; i < vec.size(); ++i) {
        if(vec[i] > max_value) {
            max_value = vec[i];
        }
    }

    return max_value;
}

template <typename T>
T min_element(const std::vector<T>& vec) {
    T min_value = vec[0];

    for(int i = 1; i < vec.size(); ++i) {
        if(vec[i] < min_value) {
            min_value = vec[i];
        }
    }

    return min_value;
}

template <typename T>
void counting_sort(std::vector<T>& vec) {
    if (vec.empty()) {
        return;
    }

    T max_val = max_element(vec);
    T min_val = min_element(vec);

    int range = max_val - min_val + 1;
    std::vector<T> count_array(range, 0);
    std::vector<T> output(vec.size(), 0);

    for (T num : vec) {
        count_array[num - min_val]++;
    }

    for (int i = 1; i < range; ++i) {
        count_array[i] += count_array[i - 1];
    }

    for (int i = vec.size() - 1; i >= 0; --i) {
        output[count_array[vec[i] - min_val] - 1] = vec[i];
        count_array[vec[i] - min_val]--;
    }

    for (int i = 0; i < vec.size(); ++i) {
        vec[i] = output[i];
    }
}

#endif
