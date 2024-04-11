#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int heights[9], sum = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> heights[i];
        sum += heights[i];
    }
    sort(heights, heights + 9);
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sum - (heights[i] + heights[j]) == 100)
            {
                for (int k = 0; k < 9; k++)
                {
                    if (k == i || k == j)
                    {
                        continue;
                    }
                    cout << heights[k] << '\n';
                }
                return 0;
            }
        }
    }
}