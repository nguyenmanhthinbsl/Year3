HDH - ATHDH 

1. GIỚI THIỆU

2. FLOW CONTROL - luông điều khiển( điều khiển lưu lượng)
   - Luồng được điều khiển bởi thanh ghi Program Counter(PC), thanh ghi này dẫn dắt máy tính thực thi các chương trình. Giá trị trong thanh ghi thay đổi theo thời gian. Thanh ghi này sẽ chứa các địa chỉ chương trình mà nó sẽ thực thi tuần tự(sequence) giá trị được định nghĩa từ a1,a2,...,a(n-1).
     Các địa chỉ a(x) là giá trị địa chỉ chứa mã chỉ thị I(x). 
   - Bước chỉ thị(Control Transfer): là quá trình chuyển đổi từ a(x) -> a(x+1).
   - Một loạt các bước chỉ thị được gọi là Luồng điều khiển(Flow Control)
   - Thông thường FlowControl đi từ mã chỉ thị I(x) -> I(x+1). Khi quy tắc này không hoạt động đúng( Gây ra bởi các ngoại lệ: jump, return, call) => luồng điều kiện ngoại lệ.
   - Ngoại lệ(Exception):
    + Diễn ra khi  có sự thay đổi trạng thái đột ngột.
     ![image](https://github.com/nguyenmanhthinbsl/classes-3rny/assets/57748767/0adea763-548b-42f0-a3ca-bd7c1f269761)
   - Cơ chế Exception Handling:
   ![image](https://github.com/nguyenmanhthinbsl/classes-3rny/assets/57748767/e77fd3e4-222b-4feb-97e6-833675dd7a61)
Có 4 loại Exception class khác nhau như sau:
![image](https://github.com/nguyenmanhthinbsl/classes-3rny/assets/57748767/5bc206d6-19d6-481d-b0c1-947aae357dc0)
  + Interrupt: Nguồn cơn từ thiết bị I/O, Không có khả năng đồng bộ(Async - bất đồng bộ). -> luôn trả về struction tiếp theo.
  
  + Trap: Từ các lỗi cố ý do quá trình phát triển pm. Có khả năng đồng bộ. Luôn trả về instruction kế tiếp.
  
  + Faukt: Lỗi có  thể khắc phục. Async -> Có thể trả về instruction hiện tại.
  + Abort: Lỗi không thể khắc phục. Async -> Không trả về gì cả.
   - aa
3. X86 ARCHITECTURE
4. OS Vulnerability
5.    
