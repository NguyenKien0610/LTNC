#include <iostream>
using namespace std;

// Struct chứa một mảng
struct ArrayStruct {
    int arr[5];
};

// Struct chứa một struct khác
struct NestedStruct {
    int x;
    int y;
};

int main() {
    // Khởi tạo một biến struct có trường dữ liệu là mảng
    ArrayStruct originalArray;
    for (int i = 0; i < 5; ++i) {
        originalArray.arr[i] = i + 1;
    }

    // Sao chép nông biến struct có trường dữ liệu là mảng
    ArrayStruct copiedArray = originalArray;

    // Thay đổi giá trị của mảng trong biến sao chép
    copiedArray.arr[0] = 10;

    // In giá trị của mảng trong biến gốc và biến sao chép
    cout << "Original array: ";
    for (int i = 0; i < 5; ++i) {
        cout << originalArray.arr[i] << " ";
    }
    cout << endl;

    cout << "Copied array: ";
    for (int i = 0; i < 5; ++i) {
        cout << copiedArray.arr[i] << " ";
    }
    cout << endl;

    // Khởi tạo một biến struct có trường dữ liệu là một struct khác
    NestedStruct originalNested = {5, 10};

    // Sao chép nông biến struct có trường dữ liệu là một struct khác
    NestedStruct copiedNested = originalNested;

    // Thay đổi giá trị của trường trong biến sao chép
    copiedNested.x = 20;

    // In giá trị của trường trong biến gốc và biến sao chép
    cout << "\nOriginal nested struct: x = " << originalNested.x << ", y = " << originalNested.y << endl;
    cout << "Copied nested struct: x = " << copiedNested.x << ", y = " << copiedNested.y << endl;

    return 0;
}

