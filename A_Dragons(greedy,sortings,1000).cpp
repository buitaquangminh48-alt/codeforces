#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	vector<pair<int, int>> dragons(m);
	for (int i = 0; i < m; i++) {
	    cin >> dragons[i].first >> dragons[i].second;
	}
	sort(dragons.begin(), dragons.end());
	for(int i = 0; i < m; i++) {
	    if (n > dragons[i].first) {
	        n += dragons[i].second;
	    }
	    else {
	        cout << "NO";
	        return 0;
	    }
	}
	cout << "YES";
}