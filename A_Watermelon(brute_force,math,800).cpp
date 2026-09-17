//A_Watermelon.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w; 
    cin >> w; 
    cout << ((w % 2 == 0 && w > 2) ? "YES" : "NO");

    return 0;
}