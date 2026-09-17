#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x1, x2, x3; cin >> x1 >> x2 >> x3;
	cout << ((x1 >= x2 && x1 <= x3) ? x1-x2+abs(x1-x3) : (x1 >= x3 && x1 <= x2) ? x1-x3+abs(x1-x2) :
	(x2 >= x1 && x2 <= x3)  ? x2-x1+abs(x2-x3) : (x2 >= x3 && x2 <= x1) ? x2-x3+abs(x2-x1) : 
	(x3 >= x1 && x3 <= x2) ? x3-x1+abs(x3-x2) : x3-x2+abs(x3-x1));
}