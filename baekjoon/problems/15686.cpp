#include <iostream>
#include <vector>
using namespace std;

int N, M, minSize = 98765432;
bool visited[51][51];
vector<pair<int, int>> housePos, chickenPos, pickedPos;
bool chickVisit[14];

void GetMinDist()
{
    int minTotal = 0;
    for (int i = 0; i < housePos.size(); i++)
    {
        int minDist = 98765432;
        int hY = housePos[i].first;
        int hX = housePos[i].second;

        for (int j = 0; j < pickedPos.size(); j++)
        {
            int cY = pickedPos[j].first;
            int cX = pickedPos[j].second;

            int dist = abs(cY - hY) + abs(cX - hX);

            minDist = min(minDist, dist);
        }
        minTotal += minDist;
    }
    minSize = min(minSize, minTotal);
}

void GetChicken(int index, int m)
{
    if (m == M)
    {
        GetMinDist();
        return;
    }

    for (int i = index; i < chickenPos.size(); i++)
    {
        if (!chickVisit[i])
        {
            chickVisit[i] = true;
            pickedPos.push_back({chickenPos[i].first, chickenPos[i].second});
            GetChicken(i + 1, m + 1);
            pickedPos.pop_back();
            chickVisit[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
                housePos.push_back({i, j});
            if (temp == 2)
                chickenPos.push_back({i, j});
        }
    }

    GetChicken(0, 0);
    cout << minSize;

    return 0;
}

// 5 3
// 0 0 1 0 0
// 0 0 2 0 1
// 0 1 2 0 0
// 0 0 1 0 0
// 0 0 0 0 2

// 5