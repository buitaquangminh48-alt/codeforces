#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(int argc, char *argv[])
{
    string s;
    cin >> s;
    for (char c : s) {
        char lower = tolower(c);
        if (lower != 'a' && lower != 'o' && lower != 'y' && lower != 'e' && lower != 'u' && lower != 'i') {
            cout << "." << lower;
        }
    }
}