#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 아직하는중
    int x1, y1, r1, x2, y2, r2, T, length, diam;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if ((x1 == x2) && (y1 == y2))
        {
            if (r1 == r2)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            length = (pow((x2 - x1), 2) + pow((y2 - y1), 2));
            diam = pow((r1 + r2), 2);
            if (length == diam)
            {
                cout << 1 << endl;
            }
            else if (length > diam)
            {
                cout << 0 << endl;
            }
            else
            {
                if (((double)pow(length, 0.5) + min(r1, r2)) < (max(r1, r2)))
                {
                    cout << 0 << endl;
                }
                else if (((double)pow(length, 0.5) + min(r1, r2)) == (max(r1, r2)))
                {
                    cout << 1 << endl;
                }
                else
                {
                    cout << 2 << endl;
                }
            }
        }
    }
}