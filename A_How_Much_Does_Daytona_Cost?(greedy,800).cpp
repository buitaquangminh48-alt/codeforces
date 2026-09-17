#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
	int t; cin >> t;
	while (t--) {
	    int n, k; cin >> n >> k;
	    vector<int> a(n); 
	    
	    for (int i = 0; i < n; i++)  cin >> a[i];	      
	    
	    auto it = find(a.begin(), a.end(), k);
	    if (it != a.end()) cout << "YES\n";
	    else cout << "NO\n";
	}
}