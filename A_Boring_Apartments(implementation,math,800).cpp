#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int digit = s[0] - '0';
		int len = s.size();
		int total = (digit - 1) * 10 + (len * (len + 1))/ 2;
		cout << total << endl;
	}
    return 0;
}