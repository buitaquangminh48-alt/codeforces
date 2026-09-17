#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    bool allUpper = true;
    bool exceptFirstUpper = true;
 
    for (char c : s) {
        if (!isupper(c)) {
            allUpper = false;
            break;
        }
    }
 
    for (int i = 1; i < s.size(); i++) {
        if (!isupper(s[i])) {
            exceptFirstUpper = false;
            break;
        }
    }
 
    if (allUpper || exceptFirstUpper) {
        for (int i = 0; i < s.size(); i++) {
            if (i == 0) s[i] = isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
            else s[i] = tolower(s[i]);
        }
    }
 
    cout << s << endl;
    return 0;
}