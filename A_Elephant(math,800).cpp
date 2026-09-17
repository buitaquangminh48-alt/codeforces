#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int x; cin >> x;
	if (x % 5 == 0)
	    cout << x / 5;
	else
	    cout << (x / 5) + 1;
}