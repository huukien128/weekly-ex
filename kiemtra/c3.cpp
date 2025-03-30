#include<iostream>
using namespace std ;
int main()
{
    int n ; cin >>n;
    int a[n];
    for(int &x : a) cin >> x ;
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
    for(int x : a)
        cout << x << " ";
}
/*
Ưu điểm:
- Dễ hiểu, dễ cài đặt.
- Ổn định (không thay đổi thứ tự của các phần tử bằng nhau).
- Không tốn bộ nhớ phụ (sắp xếp tại chỗ).
Nhược điểm:
- Hiệu suất kém với mảng lớn (O(n^2)).
- Luôn kiểm tra từng cặp phần tử, ngay cả khi mảng đã gần như sắp xếp.
So sánh với các thuật toán khác:
1. Selection Sort:
   - Tìm phần tử nhỏ nhất và đưa về đầu mỗi lần lặp.
   - Ít hoán đổi hơn Bubble Sort.
   - Không ổn định (có thể thay đổi thứ tự của các phần tử bằng nhau).
   - Độ phức tạp: O(n^2) trong mọi trường hợp.
2. Insertion Sort:
   - Lấy từng phần tử và chèn vào vị trí thích hợp trong phần đã sắp xếp.
   - Hiệu quả hơn khi mảng gần như đã sắp xếp (O(n) trong trường hợp tốt nhất).
   - Ổn định và tốn ít phép hoán đổi hơn Bubble Sort.
Độ phức tạp trung bình:
- Bubble Sort: O(n^2)
- Selection Sort: O(n^2)
- Insertion Sort: O(n^2) (nhưng tốt nhất là O(n) khi dữ liệu gần sắp xếp)
*/
