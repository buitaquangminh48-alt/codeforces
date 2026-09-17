#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	int n; cin >> n;
	while (n--) {
	    string s; cin >> s;
	    cout << ((s.find("abc") != string::npos || s.find("bac") != string::npos || s.find("acb") != string::npos || s.find("cba") != string::npos) ? "YES\n" : "NO\n");
	}
}