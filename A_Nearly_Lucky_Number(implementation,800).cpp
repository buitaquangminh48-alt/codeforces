#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while(true) {
    string s;
    int cnt = 0;
    cin >> s;
    for (char c : s) 
        if (c == '4' || c == '7') cnt++;
    
    cout << ((cnt == 4 || cnt == 7) ? "YES" : "NO");
    }
    return 0;
}