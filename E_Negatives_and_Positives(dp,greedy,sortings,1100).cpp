    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin >> t;
        
        while (t--) {
            //cout << "t = " << t << endl;
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++)
                cin >> a[i];
            
            /*sort(a.begin(), a.end());

            int sum;
            if (a[0] <= 0 && a[1] <= 0) {
                cout << "sum = -a[0] + -a[1] \n= "
                    << -a[0] << " + " << -a[1] << " \n= ";
                sum = -(a[0]) + -(a[1]);
                cout << sum << endl;
            } else {
                cout << "sum = a[0] + a[1] \n= "
                    << a[0] << " + " << a[1] << " \n= ";
                sum = a[0] + a[1];
                cout << sum << endl;
            }

            for (int i = 2; i < n; i++) {
                
                cout << "sum = sum + a[i] \n= "
                    << "sum + a["<< i << " + 2] \n= "
                    << "sum + a["<< i + 2 << "] \n= "
                    << sum << " + " << a[i] << " \n= ";
                sum += a[i];
                cout << sum << endl << endl;
            }
            
            cout << sum << "\n";
            
            => code này hơi óc chó tí 
            */

            long long sum = 0;
            int negs = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] < 0) {
                    negs++;
                    a[i] = -a[i];
                }
                
                sum += a[i];
            }
            
            sort(a.begin(), a.end()); // có thể tìm thẳng trị tuyệt đối nhỏ nhất trong mảng luôn cho tối ưu

            if (negs % 2 == 1) {
                sum -= 2 * a[0];
            }

            cout << sum << "\n";
        }

        return 0;
    }