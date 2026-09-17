#include <iostream>
using namespace std;
int distinct(int x) {
    int mask = 0;
    while (x) {
        int d = x % 10;
        if (mask & (1 << d)) return false;
        mask |= (1 << d);
        x /= 10;
    }
    return true;
}
int main(int argc, char *argv[])
{
	int y; cin >> y;
	for (int year = y + 1; ;year++) {
	    if (distinct(year)) {
	        cout << year;
	        break;
	    }
	}
}