#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N, K, path[100001], answer[100001];
queue<pair<int, int>> qp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    qp.push({N, 0});
    answer[N] = -1;
    path[N] = -1;
    while (!qp.empty())
    {
        int x = qp.front().first;
        int weight = qp.front().second;
        qp.pop();

        if (x - 1 > 0 && answer[x - 1] == 0)
        {
            qp.push({x - 1, weight + 1});
            answer[x - 1] = weight + 1;
            path[x - 1] = x;
        }
        if (x + 1 < 100001 && answer[x + 1] == 0)
        {
            qp.push({x + 1, weight + 1});
            answer[x + 1] = weight + 1;
            path[x + 1] = x;
        }
        if (x * 2 < 100001 && answer[x * 2] == 0)
        {
            qp.push({x * 2, weight + 1});
            answer[x * 2] = weight + 1;
            path[x * 2] = x;
        }
    }
    answer[N] = 0;
    queue<int> q;
    vector<int> answers;
    q.push(K);
    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        answers.push_back(now);
        if (path[now] == -1)
            continue;
        q.push(path[now]);
    }
    cout << answer[K] << '\n';
    for (int i = answers.size() - 1; i >= 0; i--)
    {
        cout << answers[i] << ' ';
    }

    return 0;
}
// 5 17

// 4
// 5 10 9 18 17