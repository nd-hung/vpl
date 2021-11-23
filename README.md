# Tự động hóa đánh giá bài tập lập trình trên Moodle với module VPL (Virtual Programming Lab) 

### [Nguyễn Đình Hưng](https://nd-hung.github.io)
#### Khoa CNTT Trường đại học Nha Trang

## Giới thiệu
### Virtual Programming Lab
- [Virtual Programming Lab (VPL)](https://vpl.dis.ulpgc.es/) là một Moodle plugin, cung cấp các chức năng quản lý & đánh giá bài tập lập trình trên Moodle.
- VPL do GS [Juan Carlos Rodríguez-del-Pino, ULPGC](https://www.dis.ulpgc.es/profesorado/ficha.asp?id=51) và cộng sự phát triển.
- Miễn phí (GNU General
   Public License version 3). [Code available at Github](https://github.com/jcrodriguez-dis/moodle-mod_vpl)

### Các tính năng chính của VPL
Ngoài các đặc điểm chung của một Moodle activity, VPL có thêm các tính năng sau:
- Cho phép biên tập mã nguồn, chạy và debug chương trình trực tuyến trên Moodle (không hỗ trợ IntelliSense).
- Đánh giá, chấm điểm chương trình tự động (hoặc bằng tay).
- Có thể hạn chế sinh viên copy/paste mã nguồn, tìm kiếm các bài làm giống nhau.
- Hỗ trợ phần lớn ngôn ngữ lập trình thông dụng: C/C++, C#, Java, Python, PHP,... 

### Kiến trúc VPL
<img src="figs/vpl_components.PNG">

VPL gồm 3 thành phần chính: 
- **Moodle VPL module**
    - Cài đặt dạng plugin trên Moodle.
    - Có các chức năng chính của một hoạt động trên Moodle (kiểm soát truy cập, tích hợp bảng điểm). (Yêu cầu Moodle 1.9.x and PHP5 trở lên).
    - Các tính năng mới: quản lý bài nộp, hỗ trợ đánh giá, và chống đạo văn.
- **Trình biên tập mã nguồn trên web (browser-based code editor)** 
    - Cung cấp các chức năng cơ bản: viết code, chạy, debug và đánh giá. (Trình duyệt web cần hỗ trợ JavaScript và Java 1.5 applets).

- **Máy chủ VPL (VPL jail server)**
    - Dịch, thi hành và đánh giá mã nguồn.

## Cài đặt VPL 
### Moodle VPL plugin (Moodle admin)
### <a href="docs/install_vpl_jail_server.md">VPL Jail Server</a>


## Sử dụng VPL
### Các dạng bài tập
Về nội dung, có thể tạo:
- **Bài tập mẫu (examples)**
    - Bài toán và code mẫu được cung cấp cho SV.
    - SV có thể chạy, debug code mẫu.
    - Có thể cho phép SV chỉnh sửa code mẫu hoặc không.
- **Bài tập dạng hoàn thiện chương trình (code completion excercises)**
    - SV được cho bài toán và code chưa hoàn chỉnh.
    - SV cần bổ sung code phù hợp để tạo nên chương trình hoàn chỉnh.
- **Tự viết chương trình hoàn chỉnh (code development excercises)**
    - GV cho bài toán, SV tự viết chương trình hoàn chỉnh.
    - GV có thể tạo sẵn một số dòng code tạo khung chương trình, khuôn mẫu input/ouput (rất hữu ích khi chấm tự động).

### Thiết lập hoạt động VPL
#### Tổng quát (general)
- Mô tả (description)
<img src="figs/vpl_description.PNG">
- Giới hạn nộp bài (submission restrictions)
<img src="figs/vpl_submission_restrictions.PNG">
    - Maximum number of files: hạn chế số lượng file tối đa SV được nộp.
    - Type of work: chọn dạng bài làm cá nhân (individual) hoặc nhóm (group).
    - Disable external file upload, paste and drop external content: hạn chế upload hoặc copy/paste từ bên ngoài (vẫn có thể copy/paste ở trong module).
    - This activity acts as an example: Nếu chọn yes, SV không được thay đổi nội dung mã nguồn hoặc upload file. GV cần tạo file code ví dụ ở mục "requested files" để SV chạy.

- Chấm điểm (grade)
<img src="figs/vpl_submission_grade.PNG">
    - Grade to pass: điểm đạt yêu cầu.

    - Free evaluations: Số lần được chạy chấm điểm không bị phạt.

    - Reduction by automatic evaluation: Sau khi dùng quá số lần tự chấm điểm, từ mỗi lần nộp bài kế tiếp hệ thống sẽ trừ bớt điểm hiện tại theo giá trị hoặc theo %.
    
    - Visible: nếu chọn yes, SV sẽ nhìn thấy các thông số này trên module.


Ví dụ: Điểm tối đa là 10, số lần được nộp không phạt là 5; sau đó, mỗi lần nộp/đánh giá kế tiếp bị trừ 0.5 điểm. Một SV nộp/đánh giá 8 lần, lần đầu tiên được 9 điểm. Vậy điểm còn lại của SV là `9 - (8-5) * 0.5 = 7.5`. 

#### Test cases
File `vpl_evaluate.cases` chứa các trường hợp kiểm thử phục vụ cho đánh giá tự động.
<img src="figs/vpl_testcases.PNG">

### Tùy chọn thực thi (execution options)
- Based on: Chọn kế thừa các tùy chọn và files từ 1 hoạt động VPL khác.

#### Tạo bài tập mẫu




## Tài liệu tham khảo
[A Virtual Programming Lab for Moodle with automatic
assessment and anti-plagiarism features](https://www.researchgate.net/publication/275652921_A_Virtual_Programming_Lab_for_Moodle_with_automatic_assessment_and_anti-plagiarism_features)<br>
[Virtual Programming Lab (VPL)](https://vpl.dis.ulpgc.es/)<br>
[Virtual Progamming Lab at Github](https://github.com/jcrodriguez-dis/moodle-mod_vpl)

