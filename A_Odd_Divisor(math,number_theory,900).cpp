#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		if (n % 2 == 1)
		    cout << "YES" << endl;
		else if ((n & n -1) == 0)
		    cout << "NO" << endl;
		else
		    cout << "YES" << endl;
	}
	
    return 0;
}