#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, target = "hello";
	cin >> s;	
    int j = 0;
    for (char c : s) {
        if (c == target[j]) 
            j++;
    }
    cout << (j == target.size() ? "YES" : "NO");
}