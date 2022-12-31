#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> graph[100001];
bool visited[100001] = {false};
int cnt = 0;
int result[100001] = {0};

void dfs(int R)
{
    if (visited[R])
    {
        return;
    }
    visited[R] = true;
    cnt++;
    result[R] = cnt;
    for (int i = 0; i < graph[R].size(); i++)
    {
        dfs(graph[R][i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, R, tempA, tempB;

    cin >> N >> M >> R;
    for (int i = 0; i < M; i++)
    {
        cin >> tempA >> tempB;
        graph[tempA].push_back(tempB);
        graph[tempB].push_back(tempA);
    }
    for (int i = 0; i < N; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
    dfs(R);

    for (int i = 1; i <= N; i++)
    {
        cout << result[i] << '\n';
    }
    return 0;
}
