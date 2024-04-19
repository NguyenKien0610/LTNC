#include <iostream>

int* createDynamicMemory() {
    int localVar = 10; // Biến địa phương
    int* ptr = &localVar; // Con trỏ trỏ đến biến địa phương
    return ptr; // Trả về con trỏ
}

int main() {
    int* dynamicPtr = createDynamicMemory(); // Gọi hàm để lấy con trỏ trỏ tới biến địa phương
    // Giờ chúng ta đang truy cập một vùng nhớ không hợp lệ vì biến địa phương đã bị giải phóng
    // Có thể dẫn đến hành vi không xác định hoặc lỗi runtime
    delete dynamicPtr; // Giải phóng bộ nhớ động

    return 0;
}
/* Khi chạy chương trình này, chúng ta sẽ gặp lỗi hoặc hành vi không xác định,
vì con trỏ dynamicPtr trỏ đến vùng nhớ của biến địa phương localVar,
nhưng localVar đã bị giải phóng khi hàm createDynamicMemory() kết thúc.
Do đó, việc giải phóng bộ nhớ động thông qua con trỏ này sẽ dẫn đến truy cập vào vùng nhớ không hợp lệ.
*/
