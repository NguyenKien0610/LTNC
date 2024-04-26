#include <iostream>
#include <cstring> // For strlen, strcpy

using namespace std;

struct String {
    int n;          // Độ dài của xâu
    char *str;      // Con trỏ chiếu tới mảng char chứa xâu

    // Constructor
    String(const char *s) {
        n = strlen(s);                 // Tính độ dài của xâu
        str = new char[n + 1];         // Cấp phát mảng động
        strcpy(str, s);                // Sao chép xâu vào mảng động
    }

    // Destructor
    ~String() {
        delete[] str;                  // Giải phóng bộ nhớ của mảng động
    }

    // In nội dung xâu
    void print() {
        cout << str;
    }

    // Nối xâu thêm vào cuối xâu hiện tại
    void append(const char* s) {
        int len = strlen(s);
        char *temp = new char[n + len + 1];  // Cấp phát mảng mới đủ lớn
        strcpy(temp, str);                    // Sao chép xâu hiện tại vào mảng mới
        strcat(temp, s);                      // Nối xâu thêm vào cuối
        delete[] str;                         // Giải phóng bộ nhớ của xâu cũ
        str = temp;                           // Trỏ str tới mảng mới
        n += len;                             // Cập nhật độ dài mới
    }
};

int main() {
    String greeting("Hi");
    greeting.append(" there");
    greeting.print();  // Kết quả: Hi there

    return 0;
}

