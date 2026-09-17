#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
 
    vector<int> expr = {
        a + b + c,
        a + b * c,
        a * (b + c),
        (a + b) * c,
        a * b * c
    };
 
    cout << *max_element(expr.begin(), expr.end()) << endl;
    return 0;
}