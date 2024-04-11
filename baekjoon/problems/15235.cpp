#include <iostream>
#include <queue>
using namespace std;

int N, peoples[1001];
queue<pair<int, int>> qp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int people;
        cin >> people;
        qp.push({i, people});
    }

    int time = 0;
    while (!qp.empty())
    {
        time++;
        int idx = qp.front().first;
        int left = qp.front().second;
        qp.pop();

        if (--left == 0)
        {
            peoples[idx] = time;
        }
        else
        {
            qp.push({idx, left});
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << peoples[i] << ' ';
    }

    return 0;
}

// 4
// 1 3 1 4

// 1 7 3 9