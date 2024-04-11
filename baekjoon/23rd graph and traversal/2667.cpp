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
    vector<vector<int>> graph;
    bool visited[26][26] = {
        false,
    };
    vector<int> answer;
    int dir[2][4] = {{0, 0, 1, -1}, {1, -1, 0, 0}};
    string tempS;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        vector<int> tempV(N);
        cin >> tempS;
        for (int j = 0; j < tempS.size(); j++)
        {
            tempV[j] = tempS[j] - 48;
        }
        graph.push_back(tempV);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int isNewApartment = 0;
            queue<pair<int, int>> qp;
            qp.push(make_pair(i, j));
            while (!qp.empty())
            {
                int y = qp.front().first;
                int x = qp.front().second;
                qp.pop();
                if (!visited[y][x] && graph[y][x] == 1)
                {
                    isNewApartment++;
                    visited[y][x] = true;
                    for (int i = 0; i < 4; i++)
                    {
                        int xx = x + dir[0][i];
                        int yy = y + dir[1][i];
                        if (xx >= 0 && xx < N && yy >= 0 && yy < N)
                        {
                            qp.push(make_pair(yy, xx));
                        }
                    }
                }
            }
            if (isNewApartment > 0)
            {
                answer.push_back(isNewApartment);
            }
        }
    }
    cout << answer.size() << '\n';
    sort(answer.begin(), answer.end());
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << '\n';
    }

    return 0;
}