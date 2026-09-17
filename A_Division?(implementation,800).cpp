#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n; cin >> n;
	while (n--) {
	    int x; cin >> x;
	    cout << ((x >= 1900) ? "Division 1\n" : 
                (x < 1900 && x >= 1600) ? "Division 2\n" : 
                (x < 1600 && x >= 1400) ? "Division 3\n" : 
                "Division 4\n");
	}
}