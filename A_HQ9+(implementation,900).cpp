#include <iostream>
#include <string>
using namespace std;
int main() {
    string p;
    cin >> p;
    cout << ((p.find('H') != string::npos || 
              p.find('Q') != string::npos || 
              p.find('9') != string::npos) ? "YES" : "NO");
}