#include <iostream>
#include <iomanip>
#include <algorithm>

void initializeMatrix(int matrix[][3], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = i * size + j + 1;
        }
    }
}

void displayMatrix(const int matrix[][3], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << std::setw(4) << matrix[i][j];
        }
        std::cout << std::endl;
    }
}

void diagonalMinMax(const int matrix[][3], int size, int& maxDiagonal, int& minDiagonal) {
    maxDiagonal = matrix[0][0];
    minDiagonal = matrix[0][0];

    for (int i = 0; i < size; ++i) {
        if (matrix[i][i] > maxDiagonal) {
            maxDiagonal = matrix[i][i];
        }
        if (matrix[i][i] < minDiagonal) {
            minDiagonal = matrix[i][i];
        }
    }
}

void sortRows(int matrix[][3], int size) {
    for (int i = 0; i < size; ++i) {
        std::sort(matrix[i], matrix[i] + size);
    }
}

int main() {
    const int size = 3;
    int matrix[size][3];

    initializeMatrix(matrix, size);
    std::cout << "Original Matrix:" << std::endl;
    displayMatrix(matrix, size);

    int maxDiagonal, minDiagonal;
    diagonalMinMax(matrix, size, maxDiagonal, minDiagonal);
    std::cout << "\nMax Diagonal Element: " << maxDiagonal << std::endl;
    std::cout << "Min Diagonal Element: " << minDiagonal << std::endl;

    sortRows(matrix, size);
    std::cout << "\nMatrix After Sorting Rows:" << std::endl;
    displayMatrix(matrix, size);

    return 0;
}
