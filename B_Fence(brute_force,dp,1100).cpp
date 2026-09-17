#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, s = 0;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    for (int i = 0; i < k; i++) 
        s+=a[i];

    int mn = s, pos = 1;
    for (int i = 0; i < n - k; i++) {
        s = s - a[i] + a[i+k];
        if (s < mn) {
            mn = s;
            pos = i + 2;
        }
    }
    cout << pos;

    return 0;
}