#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
	int n; 
    cin >> n;

	vector<int> prog, math, pe;

	for (int i = 1; i <= n; i++) {
	    int t; cin >> t;	    
	    if (t == 1) 
            prog.push_back(i);
	    else if (t == 2) 
            math.push_back(i);
	    else 
            pe.push_back(i);
	}

	int w = min({prog.size(), math.size(), pe.size()});
	cout << w << endl;	

	for (int i = 0; i < w; i++)
	    cout << prog[i] << " " << math[i] << " " << pe[i] << endl;   	    
}