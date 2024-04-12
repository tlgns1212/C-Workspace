#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int comNum, N, temp1, temp2, answer = 0;
    cin >> comNum >> N;
    vector<int> graph[101];
    bool visited[101];
    for (int i = 0; i < N; i++)
    {
        cin >> temp1 >> temp2;
        graph[temp1].push_back(temp2);
        graph[temp2].push_back(temp1);
    }

    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        int nowNum = q.front();
        q.pop();
        if (!visited[nowNum])
        {
            visited[nowNum] = true;
            answer++;

            for (int i = 0; i < graph[nowNum].size(); i++)
            {
                q.push(graph[nowNum][i]);
            }
        }
    }
    cout << answer - 1;
    return 0;
}