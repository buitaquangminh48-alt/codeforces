#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n, k, cnt = 0, s = 0; 
    cin >> n >> k;
	for (int i = 1; i <= n; i++) {
	    s += 5 * i;
	    if (s + k <= 240) {
	        cnt++;
	    }
	}
	cout << cnt;
}
