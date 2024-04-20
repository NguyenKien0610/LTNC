#include <iostream>
using namespace std;

char* weird_string() {
    char c[] = "123345";
    return c;
}

int main() {
    char* result = weird_string();
    cout << "Result: " << result << endl;
    return 0;
}
/* Khi biên dịch chương trình này, trình biên dịch sẽ phát ra cảnh báo về việc trả về địa chỉ của một biến địa phương
từ một hàm. Tuy nhiên, nếu chương trình được biên dịch và chạy, kết quả có thể không như mong đợi,
có thể là một chuỗi ngẫu nhiên hoặc gây ra lỗi không xác định.

Lỗi này xuất hiện vì mảng c là một biến địa phương của hàm weird_string, nó chỉ tồn tại trong phạm vi của hàm.
Khi hàm kết thúc, bộ nhớ được giải phóng và trở thành vùng bộ nhớ dangling.
Trả về địa chỉ của biến c từ hàm weird_string dẫn đến việc truy cập vào một vùng nhớ không hợp lệ, gây ra lỗi.
*/
