#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        set<char> st(s.begin(), s.end());

        cout << n + st.size() << endl;
    }

    return 0;
}