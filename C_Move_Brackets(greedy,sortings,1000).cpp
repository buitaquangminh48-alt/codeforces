#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    string s;
	    cin >> n >> s;
	    int brackets = 0, moves = 0;
	    for (int i = 0; i < s.size(); i++) {
	        if (s[i] == '(') {
	            brackets++;
            } else {
	            brackets--;
	            if (brackets < 0) {
	                brackets = 0;
	                moves++;
	            }
	        }
	    }
	    cout << moves << endl;
	}
}