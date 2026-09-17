#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
	int n;
	cin >> n;
	long long t;
	while (n--) {
		cin >> t;
		cout << (t/10) + (t%10) << endl;
	}
	
    return 0;
}