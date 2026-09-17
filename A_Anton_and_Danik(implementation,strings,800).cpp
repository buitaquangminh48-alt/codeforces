#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	int n, anton = 0, danik = 0;
	string s;
	cin >> n >> s;
	for (char c : s) {
	    if (c == 'A') {
	        anton++;
	    }
	    if (c == 'D') {
	        danik++;
	    }
	}
	if (anton > danik) {
	    cout << "Anton";
	    return 0;
	}
	if (anton < danik) {
	    cout << "Danik";
	    return 0;
	}
	else {
	    cout << "Friendship";
	    return 0;
	}
}