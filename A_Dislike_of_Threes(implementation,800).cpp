#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
	int t; cin >> t;
	vector<int> seq;
	for (int i = 1; seq.size() < 1000; i++) {
	    if (i % 3 == 0 || i % 10 == 3) continue;
	    seq.push_back(i);
	}
	while (t--) {
	    int n; cin >> n;
	    cout << seq[n - 1] << endl;
	}
}