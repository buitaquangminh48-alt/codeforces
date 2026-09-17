#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
	    int n, cur = 0, best = 0; 
        cin >> n;
	    vector<int> a(n);
	    for (int i = 0; i < n; i++) cin >> a[i];
	    
	    for (int i = 0; i < n; i++) {
	        if (a[i] == 0) {
	            cur++;
	            if (cur > best) 
                    best = cur;
	        }
	        else 
                cur = 0;
	    }
	    cout << best << endl;
	}
}