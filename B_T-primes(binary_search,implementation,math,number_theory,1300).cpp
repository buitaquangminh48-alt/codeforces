#include <bits/stdc++.h>
using namespace std;
 
bool isPrimes(long long x) {
	if (x < 2)
	    return false;
	for (long long i = 2; i * i <= x; i++)
	    if (x % i == 0)
	        return false;
	return true;	
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
	int n;
	cin >> n;
	long long t;
	while (n--) {
		cin >> t;
		long long root = sqrt(t);
		if (root * root == t && isPrimes(root))
		    cout << "YES" << endl;
		else
		    cout << "NO" << endl;
	}
	
    return 0;
}