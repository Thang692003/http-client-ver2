HTTP Client Version 2
1. Phát biểu bài toán:
Xây dựng chương trình HTTP client để điểm danh và nộp bài qua mạng theo giao thức HTTP (Hypertext Transfer Protocol) 
2. Yêu cầu:
- Tìm hiểu giao thức HTTP và chức năng của một HTTP client đơn giản 
- Ngôn ngữ lập trình: C++ 
- Việc lập trình được thực hiện theo thư viện lập trình C++ của giảng viên cung cấp
- Mã nguồn của chương trình cần tuân theo các chỉ dẫn về quy ước viết mã nguồn (coding style)
- Chương trình phải có giao diện người dùng: giao diện command-line 
3. Yêu cầu chức năng của chương trình
- Chức năng kết nối đến HTTP Server
- Chức năng nhập mã sinh viên từ bàn phím và gửi một bản tin yêu cầu với phương thức (lệnh) POST đến 1 địa chỉ URL với tham số là mã sinh viên, nhận phản hồi và thông báo ra màn hình. 
- Chức năng nhập vào tên file trên máy Cliennt, gửi một bản tin yêu cầu với phương thức (lệnh) PUT để upload file đó lên Server tại 1 một đường dẫn URL cụ thể, in thông báo ra màn hình về phản hồi của Server. 
- Chức năng nhập mã sinh viên từ bàn phím, sau đó upload tất cả file .CPP và .H trong thư mục hiện tại trên máy Client bằng cách gửi nhiều bản tin yêu cầu với phương thức (PUT) ở sử dụng chế độ KHÔNG duy trì kết nối (Non-persistance). Mỗi bản tin sẽ kèm URL chỉ đến đường dẫn thư mục tại Server có tên trùng với mã sinh viên. In kết quả từng bản tin phản hồi từ Server

  THÀNH VIÊN NHÓM:
      NGÔ HOÀNG LÂN - 0193766
      PHẠM HẢI HƯNG - 0192666
      ĐẶNG QUỐC ANH - 0178766
      VŨ ĐỨC THẮNG - 0205066
