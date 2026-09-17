#include <iostream>
#include <string>
using namespace std;
int main() {
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        int d = s[i] - '0';
        
        if (i == 0 && d == 9) 
            continue;

        if (d > 4) 
            s[i] = '0' + (9 - d);    
    }
    cout << s;
}