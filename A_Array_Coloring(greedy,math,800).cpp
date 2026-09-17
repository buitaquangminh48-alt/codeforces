#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
	int t; cin >> t;
	while (t--) {
	    int n, sum = 0; cin >> n;
	    vector<int> a(n);
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	        sum += a[i];
	    }
	    cout << (sum % 2 == 0 ? "YES\n" : "NO\n");
	}
}