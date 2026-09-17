#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(int argc, char *argv[])
{
	string s;
	cin >> s;
	int upper = 0, lower = 0;
	for (char c : s) {
	    if (isupper(c))
	        upper++;
	    else
	        lower++;
	}
    if (lower >= upper) {
        for (char &c : s)
            c = tolower(c);
    }
    else {
        for (char &c : s)
            c = toupper(c);
    }
    cout << s;
}