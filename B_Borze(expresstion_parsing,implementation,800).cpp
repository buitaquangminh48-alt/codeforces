#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	string s;
	getline(cin, s);
	string ans;
	for (size_t i = 0; i < s.size(); ) {
	    if (s[i] == '.') {
	        ans += "0";
	        i++;
	    }
	    else {
	        if (i + 1 < s.size()) {
	            if (s[i + 1] == '.') {
	                ans += "1";
	                i += 2;
	            }
	            else if (s[i + 1] == '-') {
	                ans += "2";
	                i += 2;
	            }
	            else {
	                ans += "1";
	                i++;
	            }
	        }
	        else {
	            i++;
	        }
	    }
	}
	cout << ans;
}