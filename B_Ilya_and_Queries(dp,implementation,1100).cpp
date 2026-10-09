#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    int n = (int)s.size();
    vector<int> pref(n, 0);
    for (int i = 1; i < n; i++) {
        cout << "pref[i=" << i+1 << "] = pref[i=" << i+1 << "] + pref[" << i+1 << " - 1] + (s[i - 1] == s[i=" << i+1 << "]) \n= "
            << "pref[i=" << i+1 << "] + pref[" << i+1 - 1 << "] + " <<  "(s[" << i+1 << " - 1] == s[i=" << i+1 << "]) \n= "
            << pref[i] << " + " << pref[i - 1] << " + (" << s[i - 1] << " == " << s[i] << ") \n= "
            << pref[i] << " + " << pref[i - 1] << " + " << (s[i - 1] == s[i]) << " \n= ";
        pref[i] += pref[i - 1] + (s[i - 1] == s[i]); // chỉ cộng những cặp trùng nhau thôi
        cout << pref[i] << endl << endl;
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        int l, r; //cnt = 0;
        cin >> l >> r;
        /*for (int i = l; i < r; i++) {
            if (s[i - 1] == s[i]) {
                cnt++;
            }
        }
        cout << cnt << "\n";
        => TLE lồi dái luôn vì chơi 2 vòng lặp =))
        */
        l--; r--;
        cout << "Vậy những cặp trùng nhau từ " << l << " -> " << r << "là: pref[r=" << r+1 << "] - pref[l=" << l+1 << "] = "
            << pref[r] << " - " << pref[l] << " = " << pref[r] - pref[l] << endl << endl;
    }

    return 0;
}