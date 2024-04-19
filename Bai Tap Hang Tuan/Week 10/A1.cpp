#include <iostream>
#include <cstring>

using namespace std;

char* concat(const char* str1, const char* str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    size_t totalLen = len1 + len2;

    // Cấp phát động mảng kết quả
    char* result = new char[totalLen + 1];

    // Sao chép xâu thứ nhất vào đầu mảng kết quả
    strcpy(result, str1);

    // Nối xâu thứ hai vào cuối mảng kết quả
    strcat(result, str2);

    return result;
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";

    char* concatenated = concat(str1, str2);
    cout << "Concatenated string: " << concatenated << endl;

    // Giải phóng bộ nhớ của mảng kết quả sau khi không cần dùng nữa
    delete[] concatenated;

    return 0;
}

