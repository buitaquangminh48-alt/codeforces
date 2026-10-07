/*
trace:
0 1 2 1 4
pref[0] = 0

cách 1:
-> pref[i=1] = pref[0] + a[1] = 0 + 1 = 1 -> loại
-> pref[i=2] = pref[1] + a[2] = 0 + 2 = 2
-> pref[i=3] = pref[2] + a[3] = 3 + 1 = 4
-> pref[i=4] = pref[3] + a[4] = 4 + 4 = 8

=> ko có cái nào ra kết quả cần tìm -> loại!

cách 2:
pref[i=1] = a[1] - pref[0] = 1 - 0 = 1
pref[i=2] = a[2] - pref[1] = 2 - 1 = 1
pref[i=3] = a[3] - pref[2] = 1 - 1 = 0
pref[i=4] = a[4] - pref[3] = 4 - 0 = 4

-> ko đc nốt

cách 3:

0 1 2 1 4
sum = 0
max_val = 0, count = 0

sum = sum + a[0] = 0 + 0 = 0
max_val = max(max_val, a[0]) = max(0, 0) = 0
-> sum - max_val = 0 - 0 = 0 = max_val(0) -> tăng count = 1

sum = sum + a[1] = 0 + 1 = 1
max_val = max(max_val, a[1]) = max(0, 1) = 1
-> sum - max_val = 1 - 1 = 0 != max_val(1) -> ko tăng count

sum = sum + a[2] = 1 + 2 = 3
max_val = max(max_val, a[2]) = max(1, 2) = 2
-> sum - max_val = 3 - 2 = 1 != max_val(2) -> ko tăng count

sum = sum + a[3] = 3 + 1 = 4
max_val = max(max_val, a[3]) = max(2, 1) = 2
-> sum - max_val = 4 - 2 = 2 = max_val(2) -> tăng count = 2

sum = sum + a[4] = 4 + 4 = 8
max_val = max(max_val, a[4]) = (2, 4) = 4
-> sum - max_val = 8 - 4 = 4 = max_val(4) -> tăng count = 3 

-> chốt cách 3 vì đã đúng. 
sum đại diện cho các phần tử trong mảng cộng dồn lại, 
max_val tìm phần tử lớn nhất khi đi tới index hiện tại trong mảng,
sum - max_val Tổng của toàn bộ prefix hiện tại sau khi loại bỏ phần tử lớn nhất trong prefix.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        long long sum = 0;
        int max_val = 0, good_prefixs_count = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            max_val = max(max_val, a[i]);
            if (sum - max_val == max_val)
                good_prefixs_count++;
        }
        cout << good_prefixs_count << "\n";
    }

    return 0;
}