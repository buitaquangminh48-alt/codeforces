#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int currentLen = 1, maxLen = 1;		
	for (int i = 0; i < n; i++) {
		if (a[i] >= a[i - 1]) {
			currentLen += 1;
		} else {
		    currentLen = 1;
		}
		maxLen = max(maxLen, currentLen);
	}
	cout << maxLen << endl;
 
    return 0;
}