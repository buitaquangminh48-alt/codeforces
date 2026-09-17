#include <iostream>
#include <string>
#include <map>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a, b, c;
    cin >> a >> b >> c;
    string guest = a + b;
 
    map<char,int> cnt;
    for (char ch : guest) cnt[ch]++;
    for (char ch : c) cnt[ch]--;
 
    for (auto kv : cnt) {
        if (kv.second != 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}