#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	int t; cin >> t;
	while (t--) {
	    string a, b; cin >> a >> b;
	    cout << b[0];
	    for (int i = 0; i < a.size() - 1; i++) {
	        cout << a[i + 1];
	    }
	    cout << " " << a[0];
	    for (int i = 0; i < b.size() - 1; i++) {
	        cout << b[i + 1];
	    }
	    cout << endl;
	}
}