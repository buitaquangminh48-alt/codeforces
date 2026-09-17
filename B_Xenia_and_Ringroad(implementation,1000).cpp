#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long n, m; 
	cin >> n >> m;
	long long cur = 1, ans = 0;
	for (int i = 0; i < m; i++) {
	    long long next; 
        cin >> next;
	    if (next >= cur) ans += next - cur;
	    else ans += n - cur + next;	    
	    cur = next;
	}
	cout << ans;
}