#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        
        int l = 0, r = n - 1;
        vector<int> add;
        while (l <= r) {
            add.push_back(a[l]);
            add.push_back(a[r]);
            l++; r--;
        }
        
        for (int i = 0; i < n; i++) 
            cout << add[i] << " ";
        cout << endl;
    }

    return 0;
}