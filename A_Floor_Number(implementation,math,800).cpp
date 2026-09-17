#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
	int t; cin >> t; 
	while (t--) {
	    int n, x;
	    cin >> n >> x;
	    if (n <= 2) 
            cout << 1 << endl;
	    else 
            cout << (int)ceil((double)(n-2)/x + 1) << endl;
	}
}