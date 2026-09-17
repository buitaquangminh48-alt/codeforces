#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n; cin >> n;
	if (n % 2 == 0)
	    cout << n - 8 << " "  << n - n + 8;
	else 
	    cout << n - 9 << " " << n - n + 9;
}