#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int shops, days;
	cin >> shops;
	vector<int> prices(shops);
	for (int i = 0; i < shops; i++) cin >> prices[i];
	    
	sort(prices.begin(), prices.end());
	
	cin >> days;
	vector<int> moneys(days);
	for (int i = 0; i < days; i++) cin >> moneys[i];
	
	for (int i = 0; i < days; i++) {
	    int cnt = upper_bound(prices.begin(), prices.end(), moneys[i]) - prices.begin();
	    cout << cnt << endl;
	}
}