#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int maxPos = 0, minPos = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[maxPos]) maxPos = i;     // find the first tallest soldier
        if (a[i] <= a[minPos]) minPos = i;    // find the last shortest soldier
    }
    int moves = maxPos + (n - 1 - minPos);
    if (maxPos > minPos) moves--;             // adjust if max is after min
    
    cout << moves;
}