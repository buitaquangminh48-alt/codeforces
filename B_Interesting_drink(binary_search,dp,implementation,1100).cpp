#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];

    sort(x.begin(), x.end());

    /*for (int i = 0; i < n; i++)
        cout << x[i] << " ";
    cout << endl;*/

    int q;
    cin >> q;

    vector<int> m(q);
    for (int i = 0; i < q; i++)
        cin >> m[i];

    for (int i = 0; i < q; i++)
    {
        int left = 0, right = n;
        // bool found = false;

        while (left < right)
        {
            cout << "left = " << left << " <= right = " << right << endl;
            cout << "mid = left + (right - left) / 2 \n= "
                 << left << " + (" << right << " - " << left << ") / 2 \n= "
                 << left << " + " << right - left << " / 2 \n= "
                 << left << " + " << (right - left) / 2 << " \n= ";
            int mid = left + (right - left) / 2;
            cout << mid << endl;

            /*if (x[mid] == m[i])
            {
                cout << mid + 1 << "\n";
                found = true;
                break;
            }*/

            if (x[mid] <= m[i])
            {
                cout << "Do x[mid=" << mid << "] (" << x[mid] << ") <= " << "m[i=" << i << "] (" << m[i] << ")\n";
                cout << "left = mid + 1 = " << mid << " + 1 = ";
                left = mid + 1;
                cout << left << endl;
            }
            else
            {
                cout << "Do x[mid=" << mid << "] (" << x[mid] << ") >= " << "m[i=" << i << "] (" << m[i] << ")\n";
                cout << "right = mid = " << mid << " \n= ";
                // right = mid + 1;
                right = mid;
                cout << right << endl;
            }
        }

        /*if (!found)
            cout << 0 << "\n";*/

        cout << left << "\n\n";

        /*
        SÀI HÀM upper_bound(x.begin(), x.end(), gtri_cần_tìm) - x.begin();
        int pos = upper_bound(x.begin(), x.end(), m[i]) - x.begin();

        cout << pos << '\n';
        */

        /*
        Đây chính là điểm cần nhớ:
        - Binary Search tìm một vị trí thỏa mãn điều kiện.
        - Lower Bound tìm vị trí xuất hiện đầu tiên.
        - Upper Bound tìm vị trí đứng ngay sau lần xuất hiện cuối cùng.

        Có 3 điều cần chốt lại
        1. upper_bound() trả về iterator, không phải index.
        2. Trừ x.begin() để chuyển iterator thành index.
        3. Index trả về cũng chính là số phần tử nhỏ hơn hoặc bằng m[i].

        Độ phức tạp:
        - sort(): \(O(N\log N)\).
        - Mỗi truy vấn: \(O(\log N)\).
        - Tổng: \(O(N\log N + Q\log N)\).
        */
    }

    return 0;
}
