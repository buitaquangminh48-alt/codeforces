#include <iostream>
using namespace std;
int main()
{
	long long n; 
    cin >> n; 
    cout << ((n % 4 == 0 || n % 7 == 0 || n % 47 == 0) ? "YES" : (n == 4 || n == 7 || n == 47 || n == 74 || n == 444 || n == 447 || n == 474 || n == 477 || n == 744 || n == 747 || n == 774 || n == 777) ? "YES" : "NO");
}