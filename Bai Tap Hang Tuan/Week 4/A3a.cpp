#include <iostream>
using namespace std;

int main() {
    // Cách 1: Khởi tạo mảng theo cách 1
    char daytab1[2][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    cout << "a) Mang daytab1:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << (int)daytab1[i][j] << " ";
        }
        cout << endl;
    }

    // Cách 2: Khởi tạo mảng theo cách 2
    char daytab2[2][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    };

    cout << "\nb) Mang daytab2:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << (int)daytab2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

