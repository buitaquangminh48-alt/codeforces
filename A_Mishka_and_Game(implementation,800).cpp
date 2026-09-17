#include <iostream>
using namespace std;
int main()
{
	int n, mishka = 0, chris = 0;
	cin >> n;
	while (n--) {        
        int m, c;
        cin >> m >> c;
        
        if (m > c)
            mishka++;
        else if (m < c)
            chris++;	    
	}
	cout << (mishka > chris ? "Mishka" : mishka < chris ? "Chris" : "Friendship is magic!^^");
}