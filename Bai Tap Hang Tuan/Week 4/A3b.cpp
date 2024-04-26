#include <iostream>
using namespace std;

int main() {
    // Cách 1: Khởi tạo mảng theo cách 1, chỉ khởi tạo 1 dòng
    char daytab1[2][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {} // Không khởi tạo giá trị cho dòng thứ 2
    };

    cout << "a) Mang daytab1 (chỉ khởi tạo 1 dòng):" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << (int)daytab1[i][j] << " ";
        }
        cout << endl;
    }

    // Cách 2: Khởi tạo mảng theo cách 2, chỉ khởi tạo 6 phần tử đầu tiên
    char daytab2[2][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        {} // Không khởi tạo giá trị cho dòng thứ 2
    };

    cout << "\nb) Mang daytab2 (chỉ khởi tạo 6 phần tử đầu tiên):" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << (int)daytab2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

