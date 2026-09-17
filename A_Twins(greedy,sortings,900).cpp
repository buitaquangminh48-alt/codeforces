#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(int argc, char *argv[])
{
	
	int n, count = 0, sum = 0;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.rbegin(), a.rend());
	int total = accumulate(a.begin(), a.end(), 0);
	for (int x : a) {
	    sum += x;
	    count++;
	    if (sum > total - sum) {
	        cout << count;
	        break;
	    }
	}
	
    return 0;
}