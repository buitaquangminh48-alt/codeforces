#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, count = 0;
	cin >> n;
	int petya, vasya, tonya;
	while (n--) {
	    cin >> petya >> vasya >> tonya;
	    if (petya + vasya + tonya >= 2)
            count++;
	}
	cout << count;
    return 0;
}