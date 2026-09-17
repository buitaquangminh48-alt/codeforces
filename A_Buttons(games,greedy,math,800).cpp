#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, n;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        if (c % 2 == 0) {
            if (a > b) {
                cout << "First\n";
            } 
            else if (a < b){
                cout << "Second\n";
            }
            else {
                cout << "Second\n";
            }
        } 
        else {
            if (a > b) {
                cout << "First\n";
            } 
            else if (a < b){
                cout << "Second\n";
            }
            else {
                cout << "First\n";
            }
        }
    }

    return 0;
}