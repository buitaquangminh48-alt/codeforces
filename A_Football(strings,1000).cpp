#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n; 
	cin >> n; 
	cin.ignore();
	
	vector<string> v;
	string s;
	for (int i = 0; i < n; i++) {
	    getline(cin, s);
	    v.push_back(s);
	}
	
	string a = v[0], b = "";
	int countA = 0, countB = 0;
	for (string x : v) {
	    if (x == a) {
	        countA++;
	    }
	    else {
	        b = x;
	        countB++;
	    }
	}
    
	if (countA >= countB) 
        cout << a;
	else 
        cout << b;
}