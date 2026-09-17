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
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		bool canSort= false;
		for (int i = 0; i < n; i++) {
			if (a[i] < a[i + 1] && a[0] == 1) {
				canSort = true;
				break;
			}
		}
		
		cout << (canSort ? "YES" : "NO") << endl;
	}
 
    return 0;
}