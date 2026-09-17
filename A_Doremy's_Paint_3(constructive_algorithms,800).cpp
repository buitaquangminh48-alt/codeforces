#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;
 
        sort(a.begin(), a.end());
        if (a.front() == a.back()) {
            cout << "YES\n"; 
            continue;
        }
 
        int x = a.front(), y = a.back();
        int cx = count(a.begin(), a.end(), x);
        int cy = count(a.begin(), a.end(), y);
 
        if (a[cx] != y) {
            cout << "NO\n";
            continue;
        }
 
        if (abs(cx - cy) <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}