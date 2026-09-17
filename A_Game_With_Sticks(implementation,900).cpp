#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
	int n, m;
	cin >> n >> m;
	cout << (min(n, m) % 2 == 1 ? "Akshat" : "Malvika");
}