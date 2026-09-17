#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, a;
    cin >> s >> a;

    reverse(a.begin(), a.end());

    cout << (a == s ? "YES" : "NO");
    return 0;
}