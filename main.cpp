#include <iostream>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        ++start;
        --end;
    }
}

int main() {
    const int size = 5;
    int array[size] = { 1, 2, 3, 4, 5 };

    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    reverseArray(array, size);

    std::cout << "Reversed Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
