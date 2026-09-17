#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int t; cin >> t;
	while (t--) {
	    char c; cin >> c;
	    if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's') cout << "YES\n";
	    else cout << "NO\n";
	}
}