#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
	int t;
	cin >> t;
	while (t--) {
		long long a, b, c;
		cin >> a >> b >> c;
		if (a != b && a != c)
		    cout << a << endl;
		else if (b != a && b != c)
		    cout << b << endl;
		else
		    cout << c << endl;
	}
	
    return 0;
}