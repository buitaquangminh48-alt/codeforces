#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
	int t; cin >> t;
	while (t--) {
	    int n; cin >> n;
	    vector<int> a(n);
	    for (int i = 0; i < n; i++) cin >> a[i];
	   
	    for (int i = 1; i <= n; i++) {
	        if (a[0] != a[1] && a[1] == a[i + 1]) {
	            cout << i << endl;
	            break;
	        } else if (a[i] != a[i-1]) {
	            cout << i+1 << endl;
                break;
	        }
	    }	
	}
}