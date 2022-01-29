#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, card[300001], answer = 0;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> card[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if ((card[i] + card[j] + card[k]) - M == 0)
                {
                    cout << M;
                    return 0;
                }
                else if ((card[i] + card[j] + card[k] - M < 0))
                {
                    if ((card[i] + card[j] + card[k]) > answer)
                    {
                        answer = card[i] + card[j] + card[k];
                    }
                }
            }
        }
    }
    cout << answer;
}