#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
	int t;
	cin >> t;
	while (t--) {
		long long a, b;
		cin >> a >> b;
		cout << (abs(a-b)+9) / 10 << endl;
	}
	
    return 0;
}