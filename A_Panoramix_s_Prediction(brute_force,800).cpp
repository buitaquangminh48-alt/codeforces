#include <bits/stdc++.h>
using namespace std;
int prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n%i==0) return 0;
    }
    return 1;
}
int check(int n, int m) {
    for (int i = n + 1; i <= m; i++) {
        if (prime(i)) {
            if (i == m) 
                return 1;
            else
                return 0;
        }
    }
    return 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    cout << (check(n, m) ? "YES" : "NO");
    
    return 0;
}