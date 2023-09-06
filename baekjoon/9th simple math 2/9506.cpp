#include <iostream>
#include <vector>
#include <numeric>

int main() {
	using namespace std;
	int n;
	while (true) {
		vector<int> divs;
		cin >> n;
		if (n == -1) break;
		for (int i = 1; i <= n/2; i++) {
			if (n % i == 0)  divs.push_back(i); 
		}
		int answer = accumulate(divs.begin(), divs.end(), 0);
		cout << n;
		if (answer == n) {
			cout << " = ";
			for (int i = 0; i < divs.size(); i++) {
				cout << divs[i] << " ";
				if (i < divs.size() - 1) cout << "+ ";
				else cout << "\n";
			}
		}
		else {
			cout << " is NOT perfect.\n";
		}
	}
	return 0;
}