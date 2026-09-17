#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	int a1, a2, a3, a4, sum = 0;
	string s;
	cin >> a1 >> a2 >> a3 >> a4 >> s;
	for (char c:s) {
	    if (c == '1')
	        sum += a1;
	    else if (c == '2')
	        sum += a2;
	    else if (c == '3')
	        sum += a3;
	    else
	        sum += a4;
	}
	cout << sum;
}