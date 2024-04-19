/* Dòng lệnh delete c; gây lỗi không mong muốn vì con trỏ c không trỏ đến vùng nhớ được cấp phát bằng new
mà trỏ đến một phần của vùng nhớ đã được cấp phát cho con trỏ a.
Điều này không tuân theo quy tắc của toán tử delete, đặc biệt là với mảng. sau đây là code đc sửa theo gợi ý bổ sung:
*/

#include <iostream>
using namespace std;

int main() {
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr << "a: " << "-" << a << "-" << endl;
    cerr << "c: " << "-" << c << "-" << endl;
    delete[] a; // Sử dụng delete[] thay vì delete
    cerr << "a after deleting c: " << "-" << a << "-" << endl; // Đoạn này có thể gây lỗi khi truy cập vào vùng nhớ đã giải phóng
    return 0;
}
/* Trong code này, ta sử dụng delete[] a; thay vì delete c; để giải phóng toàn bộ mảng được cấp phát bởi new[].
Tuy nhiên, lưu ý rằng việc truy cập vào con trỏ a sau khi đã giải phóng vùng nhớ có thể dẫn đến hành vi không xác định.
*/
