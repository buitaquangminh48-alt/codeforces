#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n, x, y, z, xr = 0, yr = 0, zr = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
	    cin >> x >> y >> z;
	    xr += x;
	    yr += y;
	    zr += z;
	}
	if (xr == 0 && yr == 0 && zr == 0)
	    cout << "YES";
	else
	    cout << "NO";
}