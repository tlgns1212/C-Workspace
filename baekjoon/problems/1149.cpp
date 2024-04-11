#include <iostream>
using namespace std;

int N, house[1001][3], red, green, blue;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    house[0][0] = 0;
    house[0][1] = 0;
    house[0][2] = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> red >> green >> blue;
        house[i][0] = min(house[i - 1][1], house[i - 1][2]) + red;
        house[i][1] = min(house[i - 1][0], house[i - 1][2]) + green;
        house[i][2] = min(house[i - 1][0], house[i - 1][1]) + blue;
    }

    cout << min(min(house[N][0], house[N][1]), house[N][2]);

    return 0;
}