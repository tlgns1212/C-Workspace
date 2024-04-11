#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define INF 98765432

int V, E, K, answer[20001];
vector<pair<int, int>> edge[20001];
priority_queue<pair<int, int>> pq;

void dijkstra(int start)
{
    answer[start] = 0;
    pq.push({0, start});

    while (!pq.empty())
    {
        int totalWeight = -pq.top().first;
        int curNode = pq.top().second;
        pq.pop();

        for (int i = 0; i < edge[curNode].size(); i++)
        {
            int nextWeight = totalWeight + edge[curNode][i].first;
            int nextNode = edge[curNode][i].second;
            if (answer[nextNode] > nextWeight)
            {
                answer[nextNode] = nextWeight;
                pq.push({-nextWeight, nextNode});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> V >> E;
    cin >> K;

    int start, end, weight;
    for (int i = 0; i < E; i++)
    {
        cin >> start >> end >> weight;
        edge[start - 1].push_back({weight, end - 1});
    }

    for (int i = 0; i <= V; i++)
    {
        answer[i] = INF;
    }

    dijkstra(K - 1);

    for (int i = 0; i < V; i++)
    {
        if (answer[i] == INF)
            cout << "INF\n";
        else
            cout << answer[i] << '\n';
    }

    return 0;
}

// 5 6
// 1
// 5 1 1
// 1 2 2
// 1 3 3
// 2 3 4
// 2 4 5
// 3 4 6

// 0
// 2
// 3
// 7
// INF