#include <iostream>
#include <vector>

int main() {
	using namespace std;
	int N, K;
	vector<int> divisors;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) divisors.push_back(i);
	}
	if (divisors.size() > K-1) cout << divisors[K-1];
	else cout << 0;

	return 0;
}