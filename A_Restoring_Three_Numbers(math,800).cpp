#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x1, x2, x3, x4; 
    cin >> x1 >> x2 >> x3 >> x4;
    int arr[4] = {x1, x2, x3, x4};
    sort(arr, arr+4);
    int sum = arr[3]; // a+b+c
    cout << sum - arr[0] << " " 
        << sum - arr[1] << " " 
        << sum - arr[2] << endl;
}