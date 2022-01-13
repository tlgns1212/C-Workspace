#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, x, y, count = 0, i, j;
    double half;
    cin >> T;
    for (i = 0; i < T; i++)
    {
        cin >> x >> y;
        half = ((double)y - x) / 2;
        for (j = 1;; j++)
        {
            count += j;
            if (count > half)
            {
                count -= j;
                break;
            }
        }
        count = y - x - (2 * count);
        if (count <= j)
        {
            j = (j - 1) * 2 + 1;
        }
        else if (count > j)
        {
            j = (j - 1) * 2 + 2;
        }
        cout << j << '\n';
    }
}