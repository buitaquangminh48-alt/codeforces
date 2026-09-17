#include <iostream>
#include <string>
#include <map>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    map<string, int> used;
    while (n--) {
        string s;
        cin >> s;
        if (used[s] == 0) cout << "OK\n" ;
        else cout << s << used[s] << endl;
        
        used[s]++;
    }
}