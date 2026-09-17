#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	int n; cin >> n;
	while (n--) {
	    string s; cin >> s;
	    cout << ((s[0] + s[1] + s[2] == s[3] + s[4] + s[5]) ? "YES\n" : "NO\n");
	}
}