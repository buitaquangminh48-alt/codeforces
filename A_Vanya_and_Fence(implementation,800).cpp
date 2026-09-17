#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
	int n, h, a, sum = 0;
	cin >> n >> h;
	while (n--) {
		cin >> a;
		if (a <= h)
		    sum ++;
		else if (a > h)
		    sum += 2;
	}
	cout << sum;
    return 0;
}