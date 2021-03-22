code trên sai ở dòng
"delete p2;"

Vì:
- int* p1 = new int; nghĩa là mình đã đăng kí chủ quyền cho p1;
- delete p1; nghĩa là xóa chủ quyền của bộ nhớ p1 và p2, bộ nhớ còn lại của p2 là bộ nở chưa đăng kí chủ quyền
- không delete được p2 nữa vì chủ quyền con trỏ ở p2 đã bị hủy ở trên