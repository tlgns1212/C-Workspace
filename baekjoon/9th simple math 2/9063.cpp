#include <iostream>

int main() {
	using namespace std;

	int N;
	int maxX = -10001, minX = 10001, maxY = -10001, minY = 10001;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int tempX, tempY;
		cin >> tempX >> tempY;
		if (tempX > maxX) {
			maxX = tempX;
		}
		if (tempX < minX) {
			minX = tempX;
		}
		if (tempY > maxY) {
			maxY = tempY;
		}
		if (tempY < minY) {
			minY = tempY;
		}
	}
	cout << (maxX - minX) * (maxY - minY);
	return 0;
}