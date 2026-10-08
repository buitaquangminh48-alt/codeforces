#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    cout << "Mảng a bình thường:\n";
    for (int i = 1; i <= n; i++) 
        cout << a[i] << " ";
    cout << endl;

    // bỏ sắp xếp ra ngoài thì -> O(n log n + mn) nếu giữ code cũ
    cout << "Mảng b sau khi sắp xếp:\n";
    vector<int> b = a;
    sort(b.begin() + 1, b.end());
    for (int i = 1; i <= n; i++) 
        cout << b[i] << " ";
    cout << endl;

    //Tạo prefix sums -> O(n log n + m) cách này nhanh gọn
    vector<long long> pa(n + 1), pb(n + 1);
    cout << "Tạo prefix sum trước!\n";
    for (int i = 1; i <= n; i++) {
        cout << "pa[i=" << i << "] = pa[i - 1] + a[i=" << i << "] \n= "
            << pa[i-1]<< " + " << a[i] << " \n= ";
        pa[i] = pa[i - 1] + a[i];
        cout << pa[i] << endl << endl;
    }

    for (int i = 1; i <= n; i++){    
        cout << "pb[i=" << i << "] = pb[i - 1] + b[i=" << i << "] \n= "
            << pb[i-1]<< " + " << b[i] << " \n= ";
        pb[i] = pb[i - 1] + b[i]; 
        cout << pb[i] << endl << endl;
    }

    int m;
    cin >> m;
    
    int type, l, r;
    while (m--) {
        //cout << "m = " << m << endl;
        cin >> type >> l >> r;
        /*int sum = 0;
        
        while (l <= r) {
            if (type == 1) {
                cout << "type = 1\n\n";
                for (int i = 1; i <= n; i++) 
                    cout << a[i] << " ";
                cout << endl;
                cout << "sum = a[l=" << l << "] + a[r=" << r << "] \n= "
                    << a[l] << " + " << a[r] << " \n= ";
                sum += a[l] + a[r];
                if (l == r) {
                    sum -= a[l];
                    break;
                }
                //cout << sum << endl << endl;
                l++; r--;
            } else {
                //out << "type = 2\n\n";
                
                for (int i = 1; i <= n; i++) 
                    cout << b[i] << " ";
                cout << endl;
                cout << "sum = b[l=" << l << "] + b[r=" << r << "] \n= "
                    << b[l] << " + " << b[r] << " \n= ";
                sum += b[l] + b[r];
                if (l == r) {
                    sum -= b[l];
                    break;
                }
                //cout << sum << endl << endl;
                l++; r--;
            }
        }

        cout << sum << "\n";
        
        => cách này sai vì O(m * n log n)
        */

        if (type == 1) {
            cout << "pa[r] - pa[l - 1] = "
                << "pa[" << r << "] + pa[" << l - 1 << "] = "
                << pa[r] << " - " << pa[l-1] << " = ";
            cout << pa[r] - pa[l - 1] << "\n\n";
        } else {
            cout << "pb[r] - pb[l - 1] = "
                << "pb[" << r << "] + pb[" << l - 1 << "] = "
                << pb[r] << " - " << pb[l-1] << " = ";
            cout << pb[r] - pb[l - 1] << "\n\n";
        }

        /*
        ==================== TỔNG KẾT ====================

        Brute Force:
        - Mỗi query lại duyệt từ l -> r
        - Nếu type = 2 còn sort lại mỗi lần
        => TLE 💀

        Tối ưu:
        - Sort mảng b chỉ 1 lần
        - Tạo prefix sum pa, pb chỉ 1 lần
        - Mỗi query lấy tổng đoạn [l, r] bằng:
            prefix[r] - prefixl - 1]

        => Không cần cộng lại l -> r cho từng query
        => Complexity: O(n n + m)

        Bài học:
        "Tính trước những thứ có thể tính trước,
        sau này chỉ việc lấy ra dùng."
        ====================
        */
    }

    return 0;
}