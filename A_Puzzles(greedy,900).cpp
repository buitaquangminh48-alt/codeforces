#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <limits>
using namespace std;
int main()
{
	int n, m; 
	cin >> n >> m;
	vector<int> a(m);
	for (int i = 0; i < m; i++) {
	    cin >> a[i];
	}   
	sort(a.begin(), a.end());	
	int ans = 1000000000;
	//4 6
	//5 7 10 10 12 22
	for (int i = 0; i + n - 1 < m; i++) {
	    int diff = a[i + n - 1] - a[i];
	    ans = min(ans, diff);
	}
	cout << ans;
}