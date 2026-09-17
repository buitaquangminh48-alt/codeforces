#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
	int a, b;
	cin >> a >> b;	
    cout << min(a, b) << " " << abs((a-b)/2);
}