#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
	    int n; cin >> n;
	    vector<int> a(n);
	    for (int i = 0; i < n; i++) cin >> a[i];
	    
	    if (n == 1) 
            cout << "YES\n";
	    else {
	        sort(a.begin(), a.end());
	        bool ok = true;
	        for (int i = 1; i < n; i++) {
	            if (a[i] - a[i - 1] > 1) {
	                ok = false;
	                break;
	            }
	        }
	        cout << (ok ? "YES\n" : "NO\n");
	    }
	}
}