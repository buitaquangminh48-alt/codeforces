#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int t; cin >> t;
	while (t--) {
	    int a, b, c; cin >> a >> b >> c;
	    cout << ((c > a && c > b) ? "+\n" : "-\n");
	}
}