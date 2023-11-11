#include <iostream>
using namespace std;

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

    cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
    cout << array[i] << " ";
    }
    cout << endl;

    reverseArray(array, size);

    cout << "Reversed Array: ";
    for (int i = 0; i < size; ++i) {
       cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
