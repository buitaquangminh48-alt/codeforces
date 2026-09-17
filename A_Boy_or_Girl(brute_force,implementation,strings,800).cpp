#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    set<char> st(s.begin(), s.end()); //dùng set để loại những ký tự trùng nhau trong chuỗi

    if (st.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!"; 
    return 0;
}