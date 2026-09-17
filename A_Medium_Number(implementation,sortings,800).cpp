#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        cout << ((a > b && a < c || a > c && a < b) ? a : 
                (b > a && b < c || b > c && b < a) ? b : c) << endl;
    }
}