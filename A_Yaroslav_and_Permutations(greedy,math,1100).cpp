#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> count;
    int max_freq = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        //cout << "count[x=" << x << "] tăng lên ";
        count[x]++; // đếm tần suất xuất hiện của các số giống nhau (lưu ý: số khác nhau là đếm riêng nữa chứ ko đếm chung!)
        //cout << count[x] << endl;
        /*cout << "max_freq = max(max_freq, count[x=" << x << "]) \n= "
            << "max(" << max_freq << ", " << count[x] << ") \n= ";*/
        max_freq = max(max_freq, count[x]);
        //cout << max_freq << endl << endl;
    }

    if (max_freq <= (n + 1) / 2) {
        //cout << "Do Max_freq (" << max_freq << ") <= (n(" << n << ") + 1) / 2 = " << (n+1)/2 << " nên in ra: ";
        cout << "YES\n";
    } else {
        //cout << "Do Max_freq (" << max_freq << ") không <= (n(" << n << ") + 1) / 2 = " << (n+1)/2 << " nên in ra: ";
        cout << "NO\n";
    }
    
    return 0;
}