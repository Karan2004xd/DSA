#include "../../include/Sorting/BucketSort.h"

void BucketSort::sort_array() {
    int number_of_buckets = round(sqrt(arr.size()));
    int max_value = INT_MIN;

    for (const auto &i : arr) {
        if (max_value < i) {
            max_value = i;
        }
    }

    std::vector<int> *bucket_arr[number_of_buckets];
    for (int i = 0; i < number_of_buckets; i++) {
        bucket_arr[i] = new std::vector<int>;  
    }
    
    for (const auto &arr_value : arr) {
        int appr_bucket = ceil((float) (arr_value * number_of_buckets) / (float) max_value);
        bucket_arr[appr_bucket - 1]->push_back(arr_value);
    }

    for (const auto &bucket : bucket_arr) {
        std::sort(bucket->begin(), bucket->end());
    }

    int index = 0;
    for (const auto &bucket : bucket_arr) {
        for (const auto &value : *bucket) {
            arr[index] = value;
            index++;
        }
    }
}
