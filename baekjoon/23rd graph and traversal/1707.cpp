#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

#define MAX_SIZE 20000 + 1
#define RED 1
#define BLUE 2

using namespace std;

int K, V, E;
vector<int> graph[MAX_SIZE];
int visited[MAX_SIZE];

void bfs(int start);
bool isBipartiteGraph();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> K;
    while (K--)
    {
        cin >> V >> E;
        for (int i = 0; i < E; i++)
        {
            int tempOne, tempTwo;
            cin >> tempOne >> tempTwo;
            graph[tempOne].push_back(tempTwo);
            graph[tempTwo].push_back(tempOne);
        }

        for (int i = 1; i <= V; i++)
        {
            if (!visited[i])
            {
                bfs(i);
            }
        }

        if (isBipartiteGraph())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

        for (int i = 0; i <= V; i++)
        {
            graph[i].clear();
        }
        memset(visited, 0, sizeof(visited));
    }
    return 0;
}

void bfs(int start)
{
    queue<int> q;
    int color = RED;

    visited[start] = color;
    q.push(start);
    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        if (visited[now] == RED)
        {
            color = BLUE;
        }
        else if (visited[now] == BLUE)
        {
            color = RED;
        }

        int gSize = graph[now].size();
        for (int i = 0; i < gSize; i++)
        {
            int next = graph[now][i];
            if (!visited[next])
            {
                visited[next] = color;
                q.push(next);
            }
        }
    }
}

bool isBipartiteGraph()
{
    for (int i = 0; i <= V; i++)
    {
        int gSize = graph[i].size();
        for (int j = 0; j < gSize; j++)
        {
            int next = graph[i][j];
            if (visited[i] == visited[next])
            {
                return false;
            }
        }
    }
    return true;
}