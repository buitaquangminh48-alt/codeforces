#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
	    int cnt = 0;
	    vector<int> x(3);
	    for (int i = 0; i < 4; i++) {
	        cin >> x[i];
	        if (x[0] < x[i]) cnt++;
	    }
	    cout << cnt << endl;
	}
}