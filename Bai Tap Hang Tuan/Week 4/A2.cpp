#include <iostream>
using namespace std;

int main() {
    // a) Khai báo mảng trong và ngoài hàm main() và không khởi tạo giá trị.
    char str1[10];
    char str2[5] = "abcd"; // Sửa kích thước mảng thành 5
    char str3[] = "abcd";

    // In các mảng dưới dạng phần tử và dạng xâu kí tự
    cout << "a) Mang str1: ";
    for (int i = 0; i < 10; ++i) {
        cout << str1[i] << " ";
    }
    cout << "| " << str1 << endl;

    cout << "b) Mang str2: ";
    for (int i = 0; i < 5; ++i) { // Duyệt 5 phần tử, bao gồm kí tự null kết thúc chuỗi
        cout << str2[i] << " ";
    }
    cout << "| " << str2 << endl;

    cout << "c) Mang str3: ";
    for (int i = 0; i < sizeof(str3)/sizeof(str3[0]); ++i) {
        cout << str3[i] << " ";
    }
    cout << "| " << str3 << endl;

    return 0;
}
