#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int S1, S2, S3, maxSum = 0, idx;
    vector<int> Dice(100, 0);
    cin >> S1 >> S2 >> S3;

    for (int i = 1; i <= S1; i++)
    {
        for (int j = 1; j <= S2; j++)
        {
            for (int k = 1; k <= S3; k++)
            {
                Dice[i + j + k]++;
            }
        }
    }
    for (int i = 3; i < 100; i++)
    {
        if (Dice[i] > maxSum)
        {
            maxSum = Dice[i];
            idx = i;
        }
    }

    cout << idx;

    return 0;
}