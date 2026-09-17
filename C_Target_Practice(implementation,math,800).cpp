#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int total = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                char c; cin >> c;
                if (c == 'X') {
                    int dist = min({i, j, 9 - i, 9 - j});                    
                    total += 1 + dist;
                }
            }
        }
        cout << total << endl;
    }
}