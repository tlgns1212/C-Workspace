#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x, y, area = 0;
    bool paper[100][100] = {
        0,
    };
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (!paper[x + j][y + k])
                {
                    paper[x + j][y + k] = true;
                    area++;
                }
            }
        }
    }
    cout << area;

    return 0;
}