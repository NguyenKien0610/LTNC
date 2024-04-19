#include <iostream>
using namespace std;

int stringLength(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Hàm đảo ngược thứ tự của xâu
char* reverse(const char* a) {
    int length = stringLength(a);
    char* result = new char[length + 1];

    const char* p = a + length - 1;
    char* q = result;
    while (p >= a) {
        *q = *p;
        q++;
        p--;
    }
    *q = '\0';
    return result;
}

// Hàm xóa ký tự c trong xâu
char* delete_char(const char* a, char c) {
    int length = stringLength(a);
    char* result = new char[length + 1];

    const char* p = a;
    char* q = result;
    while (*p != '\0') {
        if (*p != c) {
            *q = *p;
            q++;
        }
        p++;
    }
    *q = '\0';
    return result;
}

// Hàm độn thêm các ký tự space vào cuối xâu để xâu có độ dài bằng n
char* pad_right(const char* a, int n) {
    int length = stringLength(a);
    if (length >= n) {
        return reverse(a);
    }
    char* result = new char[n + 1];

    const char* p = a;
    char* q = result;
    while (*p != '\0') {
        *q = *p;
        q++;
        p++;
    }
    while (length < n) {
        *q = ' ';
        q++;
        length++;
    }
    *q = '\0';
    return result;
}

// Hàm độn thêm các ký tự space vào đầu xâu để xâu có độ dài bằng n
char* pad_left(const char* a, int n) {
    int length = stringLength(a);
    if (length >= n) {
        return reverse(a);
    }

    char* result = new char[n + 1];

    int paddingLength = n - length;
    for (int i = 0; i < paddingLength; ++i) {
        result[i] = ' ';
    }

    const char* p = a;
    char* q = result + paddingLength;
    while (*p != '\0') {
        *q = *p;
        q++;
        p++;
    }
    *q = '\0';
    return result;
}

// Hàm cắt bớt đoạn cuối của xâu để xâu có độ dài bằng n
char* truncate(const char* a, int n) {
    int length = stringLength(a);
    if (length <= n) {
        return reverse(a);
    }

    char* result = new char[n + 1];

    const char* p = a;
    char* q = result;
    for (int i = 0; i < n; ++i) {
        *q = *p;
        q++;
        p++;
    }
    *q = '\0';
    return result;
}

// Hàm xóa các ký tự trắng đứng ở đầu xâu
char* trim_left(const char* a) {
    int length = stringLength(a);
    const char* p = a;
    while (*p == ' ') {
        p++;
    }

    length -= (p - a);
    char* result = new char[length + 1];

    char* q = result;
    while (*p != '\0') {
        *q = *p;
        q++;
        p++;
    }
    *q = '\0';
    return result;
}

// Hàm xóa các ký tự trắng đứng ở cuối xâu
char* trim_right(const char* a) {
    int length = stringLength(a);
    const char* p = a + length - 1;
    while (*p == ' ') {
        p--;
    }

    length = p - a + 1;
    char* result = new char[length + 1];

    const char* q = a;
    char* r = result;
    for (int i = 0; i < length; ++i) {
        *r = *q;
        r++;
        q++;
    }
    *r = '\0';
    return result;
}

void printString(const char* str) {
    const char* p = str;
    while (*p != '\0') {
        cout << *p;
        p++;
    }
}

int main() {
    const char* input = "   Hello, World!   ";
    cout << "Input string: ";
    printString(input);
    cout << endl;

    char* reversed = reverse(input);
    cout << "Reversed string: ";
    printString(reversed);
    delete[] reversed;
    cout << endl;

    char* deletedChar = delete_char(input, 'o');
    cout << "String after deleting 'o': ";
    printString(deletedChar);
    delete[] deletedChar;
    cout << endl;

    char* paddedRight = pad_right(input, 20);
    cout << "Right-padded string: ";
    printString(paddedRight);
    delete[] paddedRight;
    cout << endl;

    char* paddedLeft = pad_left(input, 20);
    cout << "Left-padded string: ";
    printString(paddedLeft);
    delete[] paddedLeft;
    cout << endl;

    char* truncated = truncate(input, 10);
    cout << "Truncated string: ";
    printString(truncated);
    delete[] truncated;
    cout << endl;

    char* trimmedLeft = trim_left(input);
    cout << "String after trimming left: ";
    printString(trimmedLeft);
    delete[] trimmedLeft;
    cout << endl;

    char* trimmedRight = trim_right(input);
    cout << "String after trimming right: ";
    printString(trimmedRight);
    delete[] trimmedRight;
    cout << endl;

    return 0;
}

