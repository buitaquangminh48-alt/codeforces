#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
        cin.tie(nullptr);
    
	int n, free = 0, untreated = 0; 
    cin >> n;
	while (n--) {
	    int x; cin >> x;
	    if (x == -1) {
	        if (free > 0) free--;
	        else untreated++;
	    }
	    else free += x;
	}
	cout << untreated;
}