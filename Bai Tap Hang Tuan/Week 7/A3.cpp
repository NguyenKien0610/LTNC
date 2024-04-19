#include <iostream>

using namespace std;

int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Demo việc sử dụng hàm count_even cho đoạn 5 phần tử đầu và đoạn 5 phần tử cuối của mảng
    cout << "Number of even numbers in the first 5 elements: " << count_even(array, 5) << endl;
    cout << "Number of even numbers in the last 5 elements: " << count_even(array + 5, 5) << endl;

    return 0;
}
