#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, cnt = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        int kth = a[k - 1]; //vị trí của người thứ k
        if (a[i] >= kth && a[i] > 0) cnt++; //nếu có người nào có điểm lớn hơn hoặc bằng điểm của người ở vtri k thì cnt tăng lên 1 giá trị
    }
    cout << cnt;
    return 0;
}