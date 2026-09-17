#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int cnt = 1;
    bool ok = false;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) 
            cnt++;
        else 
            cnt = 1;

        if (cnt >= 7) 
            ok = true;
    }
    cout << (ok ? "YES" : "NO");
}