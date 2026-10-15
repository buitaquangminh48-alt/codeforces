#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int times = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (times + a[i] <= x) {
            times += a[i];
            cnt++;
        } else {
            break;
        }
    }
        
    cout << cnt;

    return 0;
}