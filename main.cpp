#include <iostream>
using namespace std;


int findMax(const int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMax(const int arr[][3], int rows, int cols) {
    int max = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int findMax(const int arr[][3][3], int dim1, int dim2, int dim3) {
    int max = arr[0][0][0];
    for (int i = 0; i < dim1; ++i) {
        for (int j = 0; j < dim2; ++j) {
            for (int k = 0; k < dim3; ++k) {
                if (arr[i][j][k] > max) {
                    max = arr[i][j][k];
                }
            }
        }
    }
    return max;
}

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int findMax(int a, int b, int c) {
    return findMax(findMax(a, b), c);
}

int main() {
    int arr1D[] = { 1, 5, 3, 8, 2 };
    int max1D = findMax(arr1D, 5);
    cout << "Max in 1D array: " << max1D << endl;

    int arr2D[][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int max2D = findMax(arr2D, 3, 3);
    cout << "Max in 2D array: " << max2D << endl;

    int arr3D[][3][3] = { {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
                         {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
                         {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}} };
    int max3D = findMax(arr3D, 3, 3, 3);
    cout << "Max in 3D array: " << max3D << endl;

    int maxOfTwo = findMax(10, 5);
    cout << "Max of two integers: " << maxOfTwo << endl;

    int maxOfThree = findMax(3, 9, 6);
    cout << "Max of three integers: " << maxOfThree << endl;

    return 0;
}

