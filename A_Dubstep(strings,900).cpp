#include <iostream>
#include <string>
#include <regex>
using namespace std;
int main() {
	string s; 
	getline(cin, s);
	
	s = regex_replace(s, regex("WUB"), " ");
	
	regex spaces("\\s+");
	s = regex_replace(s, spaces, " ");
	if (!s.empty() && s.front() == ' ') s.erase(0, 1);
	if (!s.empty() && s.back() == ' ') s.pop_back();
	
	cout << s;
}