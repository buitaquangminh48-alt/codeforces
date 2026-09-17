#include <iostream>
using namespace std;
int main()
{
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int s1 = k * l / nl;
	int s2 = c * d;
	int s3 = p / np;
	int sum1 = s1 / n;
	int sum2 = s2 / n;
	int sum3 = s3 / n;
	cout << ((sum1 < sum2 && sum1 < sum3) ? sum1 : (sum2 < sum1 && sum2 < sum3) ? sum2 : sum3);
}