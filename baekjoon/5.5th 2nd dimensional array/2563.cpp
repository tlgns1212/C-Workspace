#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x, y, answer = 0;
    bool isVisited[101][101] = {
        false,
    };
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        for (int j = x; j < x + 10; j++)
        {
            for (int k = y; k < y + 10; k++)
            {
                if (!isVisited[j][k])
                {
                    isVisited[j][k] = true;
                    answer++;
                }
            }
        }
    }
    cout << answer;

    return 0;
}