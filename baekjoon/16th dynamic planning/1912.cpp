#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, temp, maxNum = -1001, now = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        now += temp;
        if (now > maxNum)
            maxNum = now;
        if (now < 0)
            now = 0;
    }
    cout << maxNum;

    return 0;
}