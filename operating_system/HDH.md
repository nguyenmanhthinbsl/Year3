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
  ![image](https://github.com/nguyenmanhthinbsl/classes-3rny/assets/57748767/3ef42a04-c63e-48df-99ea-134f0f4c9fe7)

  + Trap: Từ các lỗi cố ý do quá trình phát triển pm. Có khả năng đồng bộ. Luôn trả về instruction kế tiếp.
  ![image](https://github.com/nguyenmanhthinbsl/classes-3rny/assets/57748767/b13f7a9f-0cde-4752-9da0-8ba6df9cfd1c)
  ![image](https://github.com/nguyenmanhthinbsl/classes-3rny/assets/57748767/3fea5f00-b73f-413d-8430-a2fa22d983d3)

  + Fault: Lỗi có  thể khắc phục. Async -> Có thể trả về instruction hiện tại.
   ![image](https://github.com/nguyenmanhthinbsl/classes-3rny/assets/57748767/d9617813-0d9e-4060-9806-fc0bed66f019)

  + Abort: Lỗi không thể khắc phục. Async -> Không trả về gì cả.
   ![image](https://github.com/nguyenmanhthinbsl/classes-3rny/assets/57748767/d1fcf7f8-a40e-4eaf-96bc-6407393149c1)

   - Trong Intel Processor(phổ biến hiện nay): Có tới 256 loại Exception khác nhau:
     + 0 -> 31: Exeption về Pentium architecture:
       #0: Divide Error (Chia cho 0): Mã lỗi này xảy ra khi một chia cho 0 được thực hiện.
```
#1: Debug (Gỡ lỗi): Gọi khi xảy ra một sự kiện gỡ lỗi.

#2: NMI Interrupt (NMI Interrupt): Non-Maskable Interrupt, một dạng interrupt đặc biệt không thể bị tắt bởi cờ ngắt (interrupt flag).

#3: Breakpoint (Điểm dừng): Xảy ra khi một lệnh INT 3 (interrupt 3) được thực hiện.

#4: Overflow (Tràn): Xảy ra khi một tràn số được thực hiện trong phép cộng hoặc phép trừ.

#5: BOUND Range Exceeded (Vượt quá Phạm vi BOUND): Xảy ra khi một lệnh BOUND kiểm tra một giá trị nằm ngoài phạm vi được đặt.

#6: Invalid Opcode (Mã lệnh không hợp lệ): Xảy ra khi bộ xử lý nhận diện một mã lệnh không hợp lệ.

#7: Device Not Available (Thiết bị không khả dụng): Xảy ra khi một lệnh xử lý không thể được thực hiện vì thiết bị không khả dụng.

#8: Double Fault (Lỗi đôi): Xảy ra khi một exception mới xảy ra trong quá trình xử lý exception.

#9: Coprocessor Segment Overrun (Tràn đoạn bộ xử lý phụ): Xảy ra khi bộ xử lý ngoại vi tràn bộ đoạn.

#10: Invalid TSS (Bảng trạng thái nhiệm vụ không hợp lệ): Xảy ra khi một bảng trạng thái nhiệm vụ (TSS) không hợp lệ được tham chiếu.

#11: Segment Not Present (Đoạn không tồn tại): Xảy ra khi một đoạn không tồn tại được tham chiếu.

#12: Stack-Segment Fault (Lỗi đoạn ngăn xếp): Xảy ra khi một đoạn ngăn xếp không hợp lệ được tham chiếu.

#13: General Protection (Bảo vệ tổng quát): Xảy ra khi một lỗi bảo vệ xảy ra.

#14: Page Fault (Lỗi trang): Xảy ra khi có một lỗi liên quan đến trang bảo mật.

#15: Reserved: Đã dự trữ cho việc sử dụng tương lai.

#16-31: Intel Reserved: Đã dự trữ cho việc sử dụng tương lai và không được đặc tả.
``` 
   - 32 -> 255: mã lỗi loại Interrupt và Traps được định nghĩa bởi hệ điều hành.
   - IA32
![image](https://github.com/nguyenmanhthinbsl/classes-3rny/assets/57748767/6c2b9180-9db0-4f99-b959-7f1e69905864)
- Bộ sử lý(Processor):
- Logical Control Flow:
- Private Address space
- User  and Kernel mode:
- Context Switches:
- Processing Control
- Loading and Running Program
- 
3. X86 ARCHITECTURE
  - 
4. OS Vulnerability
5.    
