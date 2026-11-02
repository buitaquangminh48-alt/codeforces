#include <bits/stdc++.h>
using namespace std;

/*
• Giả sử cần kiểm tra xem có thể làm được mid cái bánh hay không.
• Với mỗi nguyên liệu thứ i, lượng cần dùng để làm mid cái bánh là \(needed_i = a_i \times mid\).
• Nếu \(b_i \ge needed_i\), cô ấy đủ nguyên liệu và không cần dùng thêm bột phép thuật cho nguyên
liệu này.
• Nếu \(b_i < needed_i\), thiếu bao nhiêu gam sẽ cần bấy nhiêu gam bột phép thuật:
\(missing_i = needed_i - b_i\).
• Tổng số gam bột phép thuật cần dùng cho tất cả các nguyên liệu là
\(\sum missing_i\).
• Nếu tổng này ≤ k, tức là có thể làm được mid cái bánh -> thử tăng mid lên.
*/

int n;
long long k;
vector<int> a, b;

int check(long long mid) {
    long long powder_needed = 0;

    for (int i = 0; i < n; i++) {
        long long required = a[i] * mid;

        if (b[i] < required) {
            powder_needed += (required - b[i]);
        }

        if (powder_needed > k) {
            return 0;
        }
    }

    return powder_needed <= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;

    a.resize(n);
    b.resize(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    long long l = 0;
    long long r = 2000000005;
    long long ans = 0;

    while (l <= r) {
        long long m = l + (r - l) / 2;

        if (check(m)) {
            ans = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    cout << ans << "\n";

    /*
    chốt 1 vài câu cứng trước khi kết thúc bài

    1. Vì sao không Binary Search trực tiếp trên mảng?

    Không phải vì mảng không đủ thông tin, mà vì đáp án cần tìm không phải vị trí của một phần tử
    trong mảng.

    Mảng `a` và `b` chỉ cung cấp thông tin về nguyên liệu:

    - `a[i]`: lượng nguyên liệu thứ `i` cần cho một chiếc bánh.
    - `b[i]`: lượng nguyên liệu thứ `i` hiện có.

    Ta cần tìm một giá trị `mid` — số bánh có thể làm được tối đa.

    Do đó, ta phải tự xây dựng hàm `check(mid)` để trả lời câu hỏi:

    > Với lượng nguyên liệu hiện có và tối đa `k` gam bột phép thuật, liệu có thể làm `mid` chiếc
    bánh không?

    2. Vì sao `check(mid) == true` thì đi sang phải?

    Bạn giải thích chính xác rồi!

    Giả sử làm được 10 chiếc bánh. Điều đó chỉ chứng minh rằng 10 chiếc là khả thi, chứ chưa chứng
    minh 10 là tối đa.

    Có thể 11, 12 hoặc 100 chiếc vẫn khả thi.

    Vậy ta lưu `ans = mid` rồi tìm tiếp ở nửa bên phải để tìm số lượng lớn hơn.

    Ngược lại, nếu không làm nổi `mid` chiếc thì không cần thử những số lớn hơn nữa.

    3. Bạn vừa học thêm một dạng Binary Search

    Binary Search thông thường

    Tìm phần tử hoặc vị trí có điều kiện trong một mảng đã sắp xếp.

    Binary Search on Answer

    Tìm đáp án lớn nhất hoặc nhỏ nhất thỏa mãn một điều kiện đơn điệu.

    Một câu đáng nhớ:

    Đừng chỉ hỏi Binary Search đang tìm phần tử nào. Hãy hỏi nó đang tìm ranh giới nào.

    */

    return 0;
}