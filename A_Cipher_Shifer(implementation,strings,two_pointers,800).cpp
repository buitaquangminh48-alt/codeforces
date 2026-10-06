#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int l = 0;
        string add = "";
        while (l < n) {
            int r = l + 1; // vị trí đứng sau l

            while (r < n && s[l] != s[r]) r++; // Nếu ký tự của vị trí r đằng sau ký tự ở vị trí l khác nhau thì r++

            if (r < n && s[l] == s[r]) {
                add.push_back(s[l]); // Thêm ký tự đó vào nếu ký tự ở vtri r = ký tự ở vtri l
                l = r + 1; // Cắt đoạn cũ sau khi đã tìm đc ký tự ở vtri r = ký tự ở vtri l
            } 
        }
        cout << add << "\n";
    }

    return 0;
}