#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0; cin >> n;
    string s; cin >> s;
    for (int i =0; i < s.size(); i++) 
        if (s[i] == s[i + 1]) cnt++;
    cout << cnt;
    return 0;
}