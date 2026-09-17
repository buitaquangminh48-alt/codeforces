#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, cnt = 0;
    string s;
    cin >> n >> t >> s;
    while (t--) {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {       
                swap(s[i], s[i + 1]);
                i++;
            }
        }
        cnt++;
    }
    cout << s;
    return 0;
}