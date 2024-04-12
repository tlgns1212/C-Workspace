#include <iostream>
#include <algorithm>
int main() {
	using namespace std;

	int a[3];
	int answer = 0;
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);

	if (a[0] == a[1] == a[2])
		answer = a[0] + a[1] + a[2];
	else
		answer = a[0] + a[1] + (a[0] + a[1] <= a[2] ? a[0] + a[1] - 1 : a[2]);
	cout << answer;
}