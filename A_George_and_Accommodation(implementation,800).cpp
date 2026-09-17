#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, q, cnt = 0; //p là số người đang sống ở trong phòng, q là sức chứa của phòng
    cin >> n;
    while (n--) {
        cin >> p >> q;
        if (q - p >= 2) cnt++;
    }
    cout << cnt;
    return 0;
}