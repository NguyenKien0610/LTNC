#include <iostream>
using namespace std;

template<typename T, size_t N>
void printArraySize(T (&arr)[N]) {
    cout << "Size of array inside function: " << sizeof(arr) / sizeof(arr[0]) << endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};

    cout << "Size of array outside function: " << sizeof(A) / sizeof(A[0]) << endl;
    printArraySize(A);

    return 0;
}

