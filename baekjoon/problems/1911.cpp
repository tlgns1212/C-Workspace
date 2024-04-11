#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, L, answer = 0;
    vector<pair<int, int>> pools;
    cin >> N >> L;

    for (int i = 0; i < N; i++)
    {
        int start, end;
        cin >> start >> end;
        pools.push_back({start, end});
    }
    sort(pools.begin(), pools.end());

    int boxStart = 0;
    for (int i = 0; i < pools.size(); i++)
    {
        if (boxStart < pools[i].first)
            boxStart = pools[i].first;

        while (boxStart < pools[i].second)
        {
            boxStart += L;
            answer++;
        }
    }

    cout << answer;

    return 0;
}