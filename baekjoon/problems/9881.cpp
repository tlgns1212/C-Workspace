#include <iostream>
#include <queue>
using namespace std;

const int DIFFER = 17;

int N, hills[1001], answer = 2000000000;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> hills[i];
    }

    for (int i = 0; i < 100 - DIFFER; i++)
    {
        int tempAnswer = 0;
        for (int j = 0; j < N; j++)
        {
            if (hills[j] < i)
                tempAnswer += (i - hills[j]) * (i - hills[j]);
            if (hills[j] > i + DIFFER)
                tempAnswer += (hills[j] - (i + DIFFER)) * (hills[j] - (i + DIFFER));
        }
        answer = min(answer, tempAnswer);
    }

    cout << answer;

    return 0;
}

// 5
// 20
// 4
// 1
// 24
// 21

// 18