#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, ans = 0, cur = 0; 
    cin >> t;
    while (t--) {
        int a, b; 
        cin >> a >> b;

        cur = cur - a + b;

        if (cur > ans) {
            ans = cur;
        }
    }
    cout << ans;

    return 0;
}