#include <iostream>
#include <vector>
using namespace std;
int main() {	
	int n, cntEven = 0, cntOdd = 0, posEven = 0, posOdd = 0; 
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++) cin >> a[i];
	
	for (int i = 1; i <= n; i++) {
	    if (a[i] % 2 == 0) {
	        cntEven++;
	        posEven = i;
	    }
	    else {
	        cntOdd++;
	        posOdd = i;
	    }
	}
	if (cntEven < cntOdd) cout << posEven;
	else cout << posOdd;
}