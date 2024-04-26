#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

// Hàm thay đổi giá trị của biến kiểu Point theo tham trị
void modifyByValue(Point p) {
    cout << "Dia chi cua p trong ham modifyByValue: " << &p << endl;
    p.x = 10;
    p.y = 20;
}

// Hàm thay đổi giá trị của biến kiểu Point theo tham biến
void modifyByReference(Point &p) {
    cout << "Dia chi cua p trong ham modifyByReference: " << &p << endl;
    p.x = 10;
    p.y = 20;
}

int main() {
    Point p;
    p.x = 5;
    p.y = 5;

    cout << "Dia chi cua p trong main: " << &p << endl;

    cout << "\nTruoc khi goi ham modifyByValue: ";
    cout << "p.x = " << p.x << ", p.y = " << p.y << endl;

    modifyByValue(p);
    cout << "Sau khi goi ham modifyByValue: ";
    cout << "p.x = " << p.x << ", p.y = " << p.y << endl;

    cout << "\nTruoc khi goi ham modifyByReference: ";
    cout << "p.x = " << p.x << ", p.y = " << p.y << endl;

    modifyByReference(p);
    cout << "Sau khi goi ham modifyByReference: ";
    cout << "p.x = " << p.x << ", p.y = " << p.y << endl;

    return 0;
}

