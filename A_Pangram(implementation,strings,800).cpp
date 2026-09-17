#include <iostream>
#include <string>
#include <cctype>
#include <set>
using namespace std;
int main(int argc, char *argv[]) {
    int n; cin >> n;            
    string s; cin >> s;              
    if (s.size() < 26) {
        cout << "NO";
        return 0;
    }
    set<char> st; 
    for (char c : s) {
        c = tolower(c);       
        if (c < 'a' || c > 'z') {
            cout << "NO";
            return 0;
        }
        st.insert(c);
    }    
    cout << (st.size() == 26 ? "YES" : "NO");
}