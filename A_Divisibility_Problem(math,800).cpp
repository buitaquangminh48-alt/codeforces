#include <iostream>
using namespace std;
int main() {
    long long n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        cout << (b - a % b) % b << endl;
    }
}