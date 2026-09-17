#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
	int n, count = 0;;
	cin >> n;
	long long h[30], a[30];
	for (int i =0; i < n; i++) {
	    cin >> h[i] >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (h[i] == a[j]) 
				count++;			
		}
	}
	cout << count;
    return 0;
}