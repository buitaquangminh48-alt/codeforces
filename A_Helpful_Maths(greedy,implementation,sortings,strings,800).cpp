#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, nums;
    cin >> s;
    
    for (char c : s) {
        if (c != '+') nums += c;
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1) cout << "+";
    }
    return 0;
}