/*
B. Worms
5
2 7 3 4 9
3
1 25 11

1
5
3

trace:
2 7 3 4 9
1. [1, 2] -> từ 1 tới a1
2. [3, 9] -> từ a1 + 1 (2 + 1 = 3) tới a1 + a2 (2 + 7 = 9)
3. [10, 12] -> từ a1 + a2 + 1 (2 + 7 + 1 = 10) tới a1 + a2 + a3 (2 + 7 + 3 = 12)
4. [13, 16] -> từ a1 + a2 + a3 + 1 (2 + 7 + 3 + 1 = 13)
                tới a1 + a2 + a3 + a4 (2 + 7 + 3 + 4 = 16)
5. [17, 25] -> từ a1 + a2 + a3 + a4 + 1 (2 + 7 + 3 + 4 + 1 = 17)
                tới a1 + a2 + a3 + a4 + a5 (2 + 7 + 3 + 4 + 9 = 25[0] 0

ý tưởng đơn giản là cộng dồn lại bằng pref rồi sẽ dùng binary search để tìm vị trí -> xong!

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> pref(n, 0);
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }

    int m;
    cin >> m;
    /*vector<int> q(m);
    for (int i = 0; i < m; i++)
        cin >> q[i];*/
    while (m--)
    {
        //cout << "m = " << m << "\n";
        int q;
        cin >> q;

        /*cout << "pos = " << "lower_bound(pref.begin(), pref.end(), q) - pref.begin() \n= "
        
            << "lower_bound(" << pref[0] << ", " << pref[n] << ", " << q << ") - " << pref[0] << " \n= "
            << lower_bound(pref.begin(), pref.end(), q)
        int pos = lower_bound(pref.begin(), pref.end(), q) - pref.begin();
        
        Có thể dùng lower_bound cho ngắn nhưng cần hiểu bản chất!
        */

        int l = 0, r = n - 1;

        while (l < r)
        {
            int mid = l + (r - l) / 2;

            /*cout << "l = " << l
                 << ", mid = " << mid
                 << ", r = " << r
                 << ", pref[mid] = " << pref[mid] << "\n\n";*/

            if (pref[mid] >= q)
            {
                //cout << "Do pref[mid] = " << pref[mid] << " >= q = " << q << " nên r = mid (tức " << r;
                r = mid;
                //cout << " = " << r << ")\n";
            }
            else
            {
                //cout << "Do pref[mid] = " << pref[mid] << " <= q = " << q << " nên l = mid (tức " << l;
                l = mid + 1;
                //cout << " = " << l << ")\n";
            }
        }
        int pos = l;
        cout << /*"=> Worm = " <<*/ pos + 1 << "\n";
    }
    return 0;
}