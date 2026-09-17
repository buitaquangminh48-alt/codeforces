#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int t; cin >> t;
	while (t--) {
	    int a, b, c; cin >> a >> b >> c;
	    cout << ((a + b >= 10 || a + c >= 10 || b + c >= 10) ? "YES\n" : "NO\n");
	}
}