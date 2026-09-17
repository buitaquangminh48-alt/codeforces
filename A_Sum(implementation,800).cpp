#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
	    int a, b, c; cin >> a >> b >> c;
	    cout << ((a + b == c || a + c == b || b + c == a) ? "YES\n" : "NO\n");
	}
}