#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
	    string s; cin >> s;
	    if (s.find("Tetrahedron") != string::npos) ans += 4;
	    if (s.find("Cube") != string::npos) ans += 6;
	    if (s.find("Octahedron") != string::npos) ans += 8;
	    if (s.find("Dodecahedron") != string::npos) ans += 12;
	    if (s.find("Icosahedron") != string::npos) ans += 20;
	}
	cout << ans;
}