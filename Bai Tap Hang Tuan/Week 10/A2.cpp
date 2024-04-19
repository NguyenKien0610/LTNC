/* Đoạn code trên gặp vấn đề khi thực hiện delete trên con trỏ p2,
vì nó trỏ đến vùng nhớ đã bị giải phóng trước đó bởi delete p. */
#include <iostream>
using namespace std;

int main() {
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; // Giải phóng vùng nhớ được chỉ bởi p

    *p2 = 100; // p2 trỏ đến vùng nhớ đã giải phóng, gây ra lỗi
    std::cout << *p2;

    delete p2; // Lỗi, vì p2 trỏ đến vùng nhớ đã giải phóng

    return 0;
}
/* Đoạn code trên gặp vấn đề khi thực hiện delete trên con trỏ p2, vì nó trỏ đến vùng nhớ đã bị giải phóng trước đó bởi delete p.
Về lý do tại sao delete p2 gây lỗi, đó là vì p2 trỏ đến vùng nhớ mà p đã giải phóng,
khiến cho việc truy cập thông tin trong vùng nhớ này là không an toàn.
Để tránh lỗi này, ta cần gán p2 thành nullptr sau khi delete p hoặc sau khi giải phóng vùng nhớ mà p2 trỏ đến.
*/
