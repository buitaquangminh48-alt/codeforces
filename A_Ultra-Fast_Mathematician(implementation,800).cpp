#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
    string s, x;
    cin >> s >> x;
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == x[i]) result += '0';
        else result += '1';
    }
    cout << result;
}
