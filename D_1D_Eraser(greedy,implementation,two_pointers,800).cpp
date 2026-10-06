/*
cách 1:

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n, k, ans = 0;
        cin >> n >> k;
        string s;
        cin >> s;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                ans++;
                i += k - 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}*/

//cách 2:

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        cout << "t = " << t << "\n";
        int n, k, ans = 0, l = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        cout << s << "\n";
        
        while (l < n) {
            if (s[l] == 'B') {
                ans++;

                cout << "Do tìm đc B nên:\nr = min(l + k - 1, n - 1) \n= "
                    << "min(" << l << " + " << k << " - 1, " << n << " - 1) \n= "
                    << "min(" << l + k - 1 << ", " << n - 1 << ")\n";
                int r = min(l + k - 1, n - 1); // l - k + 1 và n - 1 đại diện cho bước nhảy k nếu sau đó tìm đc "B"

                cout << "l = r + 1 \n= " 
                    << r << " + 1 \n= ";
                l = r + 1;
                cout << l << "\n\n";
            } else {
                cout << "Do ko tìm đc B nên l tăng lên 1 giá trị => l = ";
                l++;
                cout << l << "\n\n";
            }
        }

        cout << ans << "\n\n";
    }

    return 0;
}
