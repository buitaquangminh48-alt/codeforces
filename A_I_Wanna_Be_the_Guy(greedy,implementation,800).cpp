#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n, p, q, x;
    cin >> n >> p;
    set<int> levels;
    for (int i = 0; i < p; i++) {
        cin >> x;
        levels.insert(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x;
        levels.insert(x);
    }
    if ((int)levels.size() == n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}