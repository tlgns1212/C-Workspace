#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, maxNum = 0, minNum = 999999999;
    string maxStr, minStr;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int y, m, d, sum = 0;
        string name;
        cin >> name >> d >> m >> y;

        sum = y * 10000 + m * (d < 10 ? 1000 : 100) + d;
        if (sum > maxNum)
        {
            maxNum = sum;
            maxStr = name;
        }
        if (sum < minNum)
        {
            minNum = sum;
            minStr = name;
        }
    }
    cout << maxStr << '\n'
         << minStr;
    return 0;
}