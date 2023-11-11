#include <iostream>

struct MinMaxResult {
    int minValue;
    int minIndex;
    int maxValue;
    int maxIndex;
};

MinMaxResult findMinMax(const int arr[], int size) {
    if (size <= 0) {
        std::cerr << "Invalid array size." << std::endl;
        return { 0, -1, 0, -1 };  
    }
    int minValue = arr[0];
    int minIndex = 0;
    int maxValue = arr[0];
    int maxIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }

    return { minValue, minIndex, maxValue, maxIndex };
}

int main() {
    const int size = 5;
    int array[size] = { 10, 5, 8, 3, 12 };

    MinMaxResult result = findMinMax(array, size);

    std::cout << "Min Value: " << result.minValue << " at index " << result.minIndex << std::endl;
    std::cout << "Max Value: " << result.maxValue << " at index " << result.maxIndex << std::endl;

    return 0;
}
