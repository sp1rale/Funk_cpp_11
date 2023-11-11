#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false; 
    }

    int sqrtNum = static_cast<int>(sqrt(num));
    for (int i = 2; i <= sqrtNum; ++i) {
        if (num % i == 0) {
            return false;  
        }
    }

    return true;  
}

int countPrimes(const int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            ++count;
        }
    }

    return count;
}

int main() {
    const int size = 8;
    int array[size] = { 2, 3, 5, 7, 10, 13, 15, 17 };

    cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    int primeCount = countPrimes(array, size);
    cout << "Number of prime numbers: " << primeCount <<endl;

	return 0;
}
