#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int limak, bob, year = 0;
    cin >> limak >> bob;
    while (limak <= bob) {
        limak *= 3;
        bob *= 2;
        year++;
    }
    cout << year;
    return 0;
}