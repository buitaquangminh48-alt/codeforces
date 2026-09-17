#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int t; 
	cin >> t;
	string name = "Timru";
	while (t--) {
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    sort(s.begin(), s.end());
	    cout << (s == name ? "YES\n" : "NO\n");
	}
}