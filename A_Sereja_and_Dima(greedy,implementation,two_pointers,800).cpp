#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
	int n, Sereja = 0, Dima = 0; 
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	
	int l = 0, r = n - 1;	
	bool turn = true;
	while (l <= r) {
	    int pick;
	    if (a[l] > a[r]) {
	        pick = a[l];
	        l++;
	    } else {
	        pick = a[r];
	        r--;
	    }
	    if (turn) Sereja += pick;
	    else Dima += pick;	    
	    turn = !turn;
	}
	cout << Sereja << " " << Dima;
}