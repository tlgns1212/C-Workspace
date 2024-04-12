#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, answer = 0;
    bool visited[1001] = {
        false,
    };
    vector<int> graph[1001];
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        graph[temp1].push_back(temp2);
        graph[temp2].push_back(temp1);
    }

    for (int i = 1; i <= N; i++)
    {
        bool isFirst = false;
        queue<int> q;
        q.push(i);
        while (!q.empty())
        {
            int now = q.front();
            q.pop();
            if (!visited[now])
            {
                isFirst = true;
                visited[now] = true;
                for (int j = 0; j < graph[now].size(); j++)
                {
                    q.push(graph[now][j]);
                }
            }
        }
        if (isFirst)
            answer++;
    }

    cout << answer;

    return 0;
}