#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	cout << min((n/m) * b + min((n%m) * a, b), n * a);
}