#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t, n, m, count = 0;
	string x, s;
	cin >> t;
	while (t--) {
     	cin >> n >> m >> x >> s;
        int ans = -1;
        string cur = x;
        for (int op = 0; op <= 6; op++) {
            if (cur.find(s) != string::npos) {
                ans = op;
                break;
            }
            cur += cur;
        }
        cout << ans << endl;
	}
}