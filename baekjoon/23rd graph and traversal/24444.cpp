#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> graph[100001];
int result[100001] = {0};
bool visited[100001] = {false};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, R, tempX, tempY, cnt = 0;

    queue<int> q;

    cin >> N >> M >> R;
    for (int i = 0; i < M; i++)
    {
        cin >> tempX >> tempY;
        graph[tempX].push_back(tempY);
        graph[tempY].push_back(tempX);
    }
    for (int i = 0; i < N; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    q.push(R);
    while (!q.empty())
    {
        if (cnt == N)
        {
            break;
        }
        int now = q.front();
        q.pop();
        if (!visited[now])
        {
            visited[now] = true;
            result[now] = ++cnt;
            for (int i = 0; i < graph[now].size(); i++)
            {
                q.push(graph[now][i]);
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        cout << result[i] << '\n';
    }
}