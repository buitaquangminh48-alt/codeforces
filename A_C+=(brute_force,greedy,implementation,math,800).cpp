#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, n, cnt = 0;
        cin >> a >> b >> n;
        while (a <= n && b <= n) {
            if (a <= b)
                a += b;
            else
                b += a;

            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
