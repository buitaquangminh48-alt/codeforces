#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	vector<int> a(n);
	bool ok = true;
	for (int i = 0; i < n; i++) {
	    cin >> a[i];
	    if (a[i] == 1) {
	        ok = false;
	        break;
	    }
	}
	cout << (ok ? "EASY" : "HARD");
}