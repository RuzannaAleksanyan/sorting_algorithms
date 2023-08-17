#ifndef BUCKET
#define BUCKET

#include <vector>

template <typename T>
void insertion_sort(std::vector<T>& bucket) {
    for (size_t i = 1; i < bucket.size(); ++i) {
        double key = bucket[i];
        int j = i - 1;

        while (j >= 0 && bucket[j] > key) {
            bucket[j + 1] = bucket[j];
            --j;
        }

        bucket[j + 1] = key;
    }
}

template <typename T>
T min(std::vector<T>& arr) {
    T min = arr[0];
    for(int i = 1; i < arr.size(); ++i) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

template <typename T>
T max(std::vector<T>& arr) {
    T max = arr[0];
    for(int i = 1; i < arr.size(); ++i) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <typename T>
void bucket_sort(std::vector<T>& arr, int numBuckets) {
    double minVal = min(arr);
    double maxVal = max(arr);

    double bucketRange = (maxVal - minVal) / numBuckets;

    std::vector<std::vector<T>> buckets(numBuckets);
    for (int i = 0; i < arr.size(); ++i) {
        int bucketIndex = static_cast<int>((arr[i] - minVal) / bucketRange);
        if (bucketIndex >= numBuckets) {
            bucketIndex = numBuckets - 1;
        }
        buckets[bucketIndex].push_back(arr[i]);
    }

    for (auto& bucket : buckets) {
        insertion_sort(bucket);
    }

    int index = 0;
    for (auto& bucket : buckets) {
        for (double value : bucket) {
            arr[index++] = value;
        }
    }
}

#endif
