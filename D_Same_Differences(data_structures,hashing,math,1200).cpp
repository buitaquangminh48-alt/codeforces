#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, cnt = 0; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0 ; i < n; i++) {
            int POI = a[i] - i;
            cout << "POI = " << a[i] << "-" << i << " = " << POI << endl;
            if (POI == a[i] - i) 
                cnt++;
        }
        cout << "cnt = " << cnt << endl;

        long long facto1 = 1, facto2 = 1;
        for (int i = 1; i <= cnt; i++) {
            facto1*=i;
        }
        for (int i = 1; i <= cnt - 2; i++) {
            facto2*=i;
        }
        cout << facto1/(2*facto2) << endl;
    }
    return 0;
}