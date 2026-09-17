#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n, k, cnt = 0; 
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    for (int i = 0; i < n; i++) {
        if (5 - a[i] >= k) cnt++;
    }
    cout << cnt / 3;
}