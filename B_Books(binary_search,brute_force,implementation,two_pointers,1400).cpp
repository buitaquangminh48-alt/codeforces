#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
	int n, t, cnt = 0, sum = 0, ans = 0; 
	cin >> n >> t;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	
	for (int i = 0; i < n; i++) {
	    sum += a[i];
	    while (sum > t) {
	        sum -= a[cnt];
	        cnt++;
	    }
	    ans = max(ans, i - cnt + 1);
	}
	cout << ans;
}