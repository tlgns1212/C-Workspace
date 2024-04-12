#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> a, vector<int> b)
{
    if (a[1] == b[1])
    {
        if (a[2] == b[2])
        {
            return a[3] > b[3];
        }
        return a[2] > b[2];
    }
    return a[1] > b[1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    vector<vector<int>> nation;

    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        vector<int> tempV;
        for (int j = 0; j < 4; j++)
        {
            int tempI;
            cin >> tempI;
            tempV.push_back(tempI);
        }
        nation.push_back(tempV);
    }

    sort(nation.begin(), nation.end(), compare);

    int gold = 0, silver = 0, bronze = 0, rank = 1, count = 1;
    for (vector<int> n : nation)
    {
        if (gold != n[1] || silver != n[2] || bronze != n[3])
        {
            rank = count;
            gold = n[1];
            silver = n[2];
            bronze = n[3];
        }
        count++;
        if (n[0] == K)
            break;
    }
    cout << rank;
}