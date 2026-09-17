#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int y, w; cin >> y >> w;
	cout << (6-max(y, w)+1 == 1 ? "1/6" : 
	               6-max(y, w)+1 == 2 ? "1/3" : 
	               6-max(y, w)+1 == 3 ? "1/2" : 
	               6-max(y, w)+1 == 4 ? "2/3" : 
	               6-max(y, w)+1 == 5 ? "5/6" : "1/1");
}