#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	int n; cin >> n;
	while (n--) {
	    int cnt = 0;
	    string s; cin >> s;
	    string a = "codeforces";
	    for (int i = 0; i < s.size(); i++) {
	        if (s[i] == a[i]) cnt++;
	    }
	    cout << 10 - cnt << endl;
	}
}
