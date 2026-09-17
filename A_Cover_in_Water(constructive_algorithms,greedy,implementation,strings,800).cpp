#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
    	string s;
    	int n;
    	cin >> n >> s;
    	
    	bool continous_three_empty_cells = false;
    	int total_count_of_empty_cells = 0;
    	
    	for (int i = 0; i < n; i++) {
    		if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.') {
    			continous_three_empty_cells = true;
    			break;
			}

			if (s[i] == '.') {
				total_count_of_empty_cells++;
            }
		}
    	if (continous_three_empty_cells)
    	    cout << 2 << endl;
    	else
    	    cout << total_count_of_empty_cells << endl;
		
	}
	
    return 0;
}
 