#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p;

    // In địa chỉ của từng trường và chính biến đó
    cout << "Dia chi cua p: " << &p << endl;
    cout << "Dia chi cua p.x: " << &(p.x) << endl;
    cout << "Dia chi cua p.y: " << &(p.y) << endl;

    return 0;
}
