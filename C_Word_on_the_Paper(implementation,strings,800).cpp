#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<string> s(8);
        for (int i = 0; i < 8; i++) 
            cin >> s[i];

        string add = "";
        vector<string> addword;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (isalpha(s[i][j])) {
                    add += s[i][j];
                }
            }
            
        }
        addword.push_back(add);
        
        
        for (int i = 0; i < addword.size(); i++) {
            cout << addword[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}