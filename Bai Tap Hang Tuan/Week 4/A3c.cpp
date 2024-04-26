#include <iostream>
using namespace std;

int main() {
    // Cách 1: Bỏ kích thước số dòng
    char daytab1[][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    cout << "a) Mang daytab1 (không chỉ định số dòng):" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << (int)daytab1[i][j] << " ";
        }
        cout << endl;
    }

    // Cách 2: Bỏ kích thước số cột
    char daytab2[2][] = {
        {31,28,31,30,31,30,31,31,30,31,30,31}, // Lỗi ở đây, không thể bỏ kích thước của số cột
        {31,29,31,30,31,30,31,31,30,31,30,31}  // Lỗi ở đây, không thể bỏ kích thước của số cột
    };

    cout << "\nb) Mang daytab2 (không chỉ định số cột):" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << (int)daytab2[i][j] << " ";
        }
        cout << endl;
    }

    // Cách 3: Bỏ kích thước cả hai
    char daytab3[][] = { // Lỗi ở đây, không thể bỏ kích thước của số dòng và số cột
        {31,28,31,30,31,30,31,31,30,31,30,31}, // Lỗi ở đây, không thể bỏ kích thước của số cột
        {31,29,31,30,31,30,31,31,30,31,30,31}  // Lỗi ở đây, không thể bỏ kích thước của số cột
    };

    cout << "\nc) Mang daytab3 (không chỉ định số dòng và số cột):" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << (int)daytab3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
