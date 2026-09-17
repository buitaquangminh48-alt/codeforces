#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	string prev, cur;
	int groups = 0;
	for (int i = 0; i < n; i++) {
	    cin >> cur;
	    if (i == 0 || cur != prev) groups++;
	    prev = cur;	        
	}
	cout << groups;
}