#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, Q;
vector<vector<pair<int, int>>> Usado;

int bfs(int startPoint, int weight)
{
    vector<bool> isVisited(N + 1, false);
    queue<pair<int, int>> qp;
    int count = 0;

    qp.push({startPoint, weight});
    isVisited[startPoint] = true;
    while (!qp.empty())
    {
        int curPoint = qp.front().first;
        qp.pop();

        for (pair<int, int> &usado : Usado[curPoint])
        {
            int nextPoint = usado.first;
            int nextWeight = usado.second;

            if (!isVisited[nextPoint] && nextWeight >= weight)
            {
                count++;
                qp.push({nextPoint, nextWeight});
                isVisited[nextPoint] = true;
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> Q;
    Usado.resize(N + 1);
    for (int i = 0; i < N - 1; i++)
    {
        int node1, node2, weight;
        cin >> node1 >> node2 >> weight;
        Usado[node1].push_back({node2, weight});
        Usado[node2].push_back({node1, weight});
    }

    for (int i = 0; i < Q; i++)
    {
        int start, weight;
        cin >> weight >> start;
        cout << bfs(start, weight) << '\n';
    }

    return 0;
}

// 4 3
// 1 2 3
// 2 3 2
// 2 4 4
// 1 2
// 4 1
// 3 1

// 3
// 0
// 2