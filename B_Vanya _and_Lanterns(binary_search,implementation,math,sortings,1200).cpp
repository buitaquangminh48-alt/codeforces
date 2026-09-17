#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(int argc, char *argv[])
{
	int n;
	double l;
	cin >> n >> l;
	vector<double> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	
	sort(a.begin(), a.end());
	
	double maxDist = 0;
	for (int i = 0; i < n - 1; i++) {
	    maxDist = max(maxDist, a[i + 1] - a[i]);	    
	}
	
	double ans = max({maxDist/2.0, a[0], l - a[n - 1]});
    cout << fixed << setprecision(10) << ans;	    
}