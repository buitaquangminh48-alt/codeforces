#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
	int k, r;
	cin >> k >> r;
    long long last = k % 10;
    for (int x = 1; x <= 10; x++) {
	    if ((last*x) % 10 == 0 || (last*x % 10 == r)) {
	    	cout << x;
	    	break;
	    }
	}
	
    return 0;
}