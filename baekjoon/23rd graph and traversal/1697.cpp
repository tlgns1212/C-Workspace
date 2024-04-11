#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    queue<pair<int, int>> qp;
    int pos[100001] = {
        0,
    };
    cin >> N >> K;

    qp.push(make_pair(N, 0));
    while (!qp.empty())
    {
        int now = qp.front().first;
        int cnt = qp.front().second;
        qp.pop();

        if (now >= 0 && now <= 100000 && pos[now] == 0)
        {
            pos[now] = cnt;
            if (now == K)
                break;
            qp.push(make_pair(now - 1, cnt + 1));
            qp.push(make_pair(now + 1, cnt + 1));
            qp.push(make_pair(now * 2, cnt + 1));
        }
    }
    cout << pos[K];

    return 0;
}