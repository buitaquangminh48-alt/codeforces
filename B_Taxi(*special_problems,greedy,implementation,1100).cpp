#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
	    int x; cin >> x;
	    if (x==1) c1++;
	    else if (x==2) c2++;
	    else if (x==3) c3++;
	    else c4++;
	}
	int groups = c4;
	
	int m = min(c3, c1);
	groups += c3;
	c1 -= m;
	
	groups += c2/2;
	c2 %= 2;
	
	if (c2) {
	    groups++;
	    c1 -= min(2, c1);
	}
	
	if (c1 > 0) groups += (c1+3)/4;
	
	cout << groups;
}