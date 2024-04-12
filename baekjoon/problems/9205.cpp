#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int t;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while (t--)
    {
        int n, tempX, tempY;
        bool isAnswer = false;
        pair<int, int> home, dest;
        vector<pair<int, int>> market;
        queue<pair<int, int>> qp;
        bool visited[101];
        for (int i = 0; i < 101; i++)
            visited[i] = false;
        cin >> n;
        cin >> tempX >> tempY;
        home = {tempX, tempY};
        for (int i = 0; i < n; i++)
        {
            cin >> tempX >> tempY;
            market.push_back({tempX, tempY});
        }
        cin >> tempX >> tempY;
        dest = {tempX, tempY};

        qp.push({home.first, home.second});
        while (!qp.empty())
        {
            pair<int, int> pos = qp.front();
            qp.pop();
            int x = pos.first;
            int y = pos.second;

            if ((abs(dest.first - x) + abs(dest.second - y)) <= 1000)
            {
                isAnswer = true;
                break;
            }

            for (int i = 0; i < n; i++)
            {
                if (visited[i])
                    continue;
                if ((abs(market[i].first - x) + abs(market[i].second - y)) <= 1000)
                {
                    qp.push({market[i].first, market[i].second});
                    visited[i] = true;
                }
            }
        }
        cout << (isAnswer ? "happy" : "sad") << '\n';
    }

    return 0;
}
