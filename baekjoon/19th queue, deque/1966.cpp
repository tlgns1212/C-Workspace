#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, temp, idx, val, answer = 0;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> M;
        queue<pair<int, int>> q;
        priority_queue<int> pqq;
        answer = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> temp;
            q.push({i, temp});
            pqq.push(temp); // 가장 큰 값 먼저 나오게 만듬
        }

        while (!q.empty())
        {
            idx = q.front().first;
            val = q.front().second;
            q.pop();
            if (val == pqq.top())
            {
                pqq.pop();
                answer++;
                if (idx == M)
                {
                    break;
                }
            }
            else
            {
                q.push({idx, val});
            }
        }
        cout << answer << '\n';
    }

    return 0;
}