#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int M, N, maxTrust;
vector<int> graph[10001], answers;

int bfs(int start)
{
    queue<int> q;
    int count = 0;
    bool visited[10001] = {false};
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        for (int i = 0; i < graph[now].size(); i++)
        {
            int next = graph[now][i];
            if (!visited[next])
            {
                visited[next] = true;
                q.push(next);
                count++;
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

    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int first, second;
        cin >> first >> second;
        graph[second].push_back(first);
    }

    for (int i = 0; i < N; i++)
    {
        int now = bfs(i + 1);
        if (now > maxTrust)
        {
            maxTrust = now;
            answers.clear();
            answers.push_back(i + 1);
        }
        else if (now == maxTrust)
        {
            answers.push_back(i + 1);
        }
    }

    for (int answer : answers)
    {
        cout << answer << ' ';
    }

    return 0;
}

// 5 4
// 3 1
// 3 2
// 4 3
// 5 3

// 1 2