#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int P;
    cin >> P;
    for (int i = 0; i < P; i++)
    {
        int T, h[20], line[20], count = 0;

        cin >> T;
        for (int j = 0; j < 20; j++)
            cin >> h[j];

        for (int j = 0; j < 20; j++)
        {
            line[j] = h[j];
            for (int k = j - 1; k >= 0; k--)
            {
                if (line[k] > line[j])
                {
                    count++;
                }
            }
        }
        cout << T << ' ' << count << '\n';
    }
    return 0;
}