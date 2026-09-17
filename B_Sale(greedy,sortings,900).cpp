#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, sum = 0, cnt = 0; 
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; i++) {
        if (a[i] < 0 && cnt < m) {
            sum += -a[i];
            cnt++;
        }
    }

    cout << sum << endl;
    return 0;
}