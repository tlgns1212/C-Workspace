#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int x, y, ans;
        cin >> x >> y;
        y = y - x;
        x = 1;
        ans = 0;
        while (1)
        {
            y = y - x;
            ans++;
            if (y <= 0)
            {
                break;
            }
            y = y - x;
            ans++;
            if (y <= 0)
            {
                break;
            }
            x++;
        }
        cout << ans << '\n';
    }
}