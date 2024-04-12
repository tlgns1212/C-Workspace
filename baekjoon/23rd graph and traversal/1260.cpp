#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int N, M, V;
vector<int> graph[1002];
bool dfsVisited[1002];
bool bfsVisited[1002];

void DFS(int sNod)
{
    if (dfsVisited[sNod])
        return;

    dfsVisited[sNod] = true;
    cout << sNod << ' ';
    for (int node : graph[sNod])
    {
        DFS(node);
    }
}

void BFS(int sNod)
{
    queue<int> q;
    q.push(sNod);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        if (bfsVisited[node])
            continue;
        bfsVisited[node] = true;
        cout << node << ' ';

        for (int value : graph[node])
        {
            q.push(value);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x1, x2;

    cin >> N >> M >> V;
    for (int i = 0; i < M; i++)
    {
        cin >> x1 >> x2;
        graph[x1].push_back(x2);
        graph[x2].push_back(x1);
    }
    for (int i = 0; i <= N; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    DFS(V);
    cout << '\n';
    BFS(V);
}