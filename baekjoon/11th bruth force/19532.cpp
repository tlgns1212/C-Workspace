#include <iostream>
int main()
{
	using namespace std;

	int a, b, c, d, e, f, x, y;
	cin >> a >> b >> c >> d >> e >> f;

	for (int i = -999; i <= 999; i++)
	{
		for (int j = -999; j <= 999; j++)
		{
			if (a * i + b * j == c && d * i + e * j == f)
			{
				cout << i << " " << j << "\n";
				return 0;
			}
		}
	}
	return 0;
}
