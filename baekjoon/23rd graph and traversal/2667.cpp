#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    int graph[26][26] = {0};
    bool visited[26][26] = {false};
    vector<int> result;
    int cnt = 0;
    queue<pair<int, int>> q;
    string temp;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        for (int j = 0; j < temp.size(); j++)
        {
            graph[i][j] = temp[j] - '0';
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (graph[i][j] == 1 && !visited[i][j])
            {
                cnt = 0;
                q.push(pair<int, int>(i, j));
                while (!q.empty())
                {
                    int tempOne = q.front().first;
                    int tempTwo = q.front().second;
                    q.pop();
                    if (!visited[tempOne][tempTwo] && graph[tempOne][tempTwo] == 1)
                    {
                        cnt++;
                        visited[tempOne][tempTwo] = true;
                        for (int k = 0; k < 4; k++)
                        {
                            int tempI = tempOne + dir[k][0], tempJ = tempTwo + dir[k][1];
                            if (tempI >= 0 && tempI < N && tempJ >= 0 && tempJ < N)
                            {
                                q.push(pair<int, int>(tempI, tempJ));
                            }
                        }
                    }
                }
                result.push_back(cnt);
            }
        }
    }
    cout << result.size() << '\n';
    sort(result.begin(), result.end());
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << '\n';
    }
}