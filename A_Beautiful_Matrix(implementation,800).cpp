#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int x; cin >> x;
            if (x == 1) cout << abs(i - 3) + abs(j - 3);
        }
    }
    return 0;
}