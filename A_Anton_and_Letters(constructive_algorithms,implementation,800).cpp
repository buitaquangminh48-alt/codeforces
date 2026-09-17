#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    bool seen[256] = {false};
    int cnt = 0;
    for (unsigned char c : s) {
        if (!seen[c]) {
            seen[c] = true;
            cnt++;
        }
    }
    cout << ((cnt == 2) ? 0 : abs(cnt - 4));
}