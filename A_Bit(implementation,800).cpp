#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x = 0;
    cin >> n;
    while (n--) {
        string s; cin >> s;
        if (s.find("++") != string::npos) x++;
        else x--;
    }
    cout << x;
    return 0;
}