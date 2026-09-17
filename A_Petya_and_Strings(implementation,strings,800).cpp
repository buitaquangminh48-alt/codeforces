#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    int sumA = 0, sumB = 0;
    getline(cin, a);
    getline(cin, b);

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    cout << "Tong ASCII cua a = ";
    for (int i = 0; i < a.size(); i++) {
        cout << (int)a[i];
        if (i != a.size() - 1) cout << " + ";
        sumA += (int)a[i];
    }
    
    cout << " = " << sumA << endl;

    cout << "Tong ASCII cua b = ";
    for (int i = 0; i < b.size(); i++) {
        cout << (int)b[i];
        if (i != b.size() - 1) cout << " + ";
        sumB += (int)b[i];
    }
    
    cout << " = " << sumB << endl;

    if (a < b) cout << "Do tong ASCII cua a < b nen in ra: " << -1;
    else if (a > b) cout << "Do tong ASCII cua a > b nen in ra: " << 1;
    else cout << "Do tong ASCII cua a = b nen in ra: " << 0;
    cin.get();
    return 0;
}