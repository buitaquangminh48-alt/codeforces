#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
	int n, amazing = 0, maxScores = 0, minScores = 0; 
	cin >> n;
	vector<int> scores(n);
	for (int i = 0; i < n; i++) {
	    cin >> scores[i];
	}
	maxScores = scores[0];
	minScores = scores[0];
	for (int i = 1; i < n; i++) {
	    if (scores[i] > maxScores) {
	        amazing++;
	        maxScores = scores[i];
	    }
	    else if (scores[i] < minScores) {
	        amazing++;
	        minScores = scores[i];
	    }
	}
	cout << amazing;
}