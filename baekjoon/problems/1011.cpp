#include <iostream>
using namespace std;

int T, start, dest;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while (T--)
    {
        cin >> start >> dest;
        long long dist = dest - start;
        long long fly = 1;
        while (fly * fly < dist)
        {
            fly++;
        }
        fly--;
        if (dist == fly * fly)
            cout << 2 * fly - 1 << '\n';
        else if (fly * fly + fly >= dist)
            cout << 2 * fly << '\n';
        else
            cout << 2 * fly + 1 << '\n';
    }

    return 0;
}
