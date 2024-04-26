#include <iostream>
using namespace std;

// Khai báo mảng ngoài hàm main
int arr1[5];

int main() {
    // a) Khai báo mảng trong và ngoài hàm main() và không khởi tạo giá trị cho mảng
    int arr2[5];

    // In mảng arr1
    cout << "Mang arr1: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // In mảng arr2
    cout << "Mang arr2: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // b) Khai báo và khởi tạo trong và ngoài hàm main() dạng int a[N] = {1, 2, 3, 4} với N lớn hơn và nhỏ hơn 4.
    int arr3[4] = {1, 2, 3, 4};

    // In mảng arr3
    cout << "Mang arr3: ";
    for (int i = 0; i < 4; ++i) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    // c) Khai báo và khởi tạo trong và ngoài hàm main() dạng int a[ ] = {1, 2, 3, 4}.
    int arr4[] = {1, 2, 3, 4};

    // In mảng arr4
    cout << "Mang arr4: ";
    for (int i = 0; i < sizeof(arr4)/sizeof(arr4[0]); ++i) {
        cout << arr4[i] << " ";
    }
    cout << endl;

    return 0;
}

