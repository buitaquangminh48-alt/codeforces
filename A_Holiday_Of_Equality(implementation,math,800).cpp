#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, s = 0; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)  cin >> a[i];
                
    auto it = max_element(a.begin(), a.end());
    for (int i = 0; i < n; i++)  {
        s += *it - a[i];
    }
    cout << s;     
}