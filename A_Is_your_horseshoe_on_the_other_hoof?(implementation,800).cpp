#include <iostream>
#include <set>
using namespace std;
int main()
{
	set<int> colors;
	for (int i = 1; i <= 4; i++) {
	    int x;
	    cin >> x;
	    colors.insert(x);
	}
	cout << 4 - colors.size();
}