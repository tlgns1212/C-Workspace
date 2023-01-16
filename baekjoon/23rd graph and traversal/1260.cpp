#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
bool visitedDFS[1001] = {false};
bool visitedBFS[1001] = {false};

void dfs(int V)
{
    if (visitedDFS[V])
    {
        return;
    }
    visitedDFS[V] = true;
    cout << V << ' ';
    for (int i = 0; i < graph[V].size(); i++)
    {
        dfs(graph[V][i]);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, V, tempOne, tempTwo;
    queue<int> q;
    cin >> N >> M >> V;
    for (int i = 0; i < M; i++)
    {
        cin >> tempOne >> tempTwo;
        graph[tempOne].push_back(tempTwo);
        graph[tempTwo].push_back(tempOne);
    }
    for (int i = 1; i <= N; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(V);
    cout << '\n';

    q.push(V);
    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        if (!visitedBFS[now])
        {
            visitedBFS[now] = true;
            cout << now << ' ';
            for (int i = 0; i < graph[now].size(); i++)
            {
                q.push(graph[now][i]);
            }
        }
    }
}