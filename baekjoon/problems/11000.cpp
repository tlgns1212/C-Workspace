#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int N, visited[200001];
vector<pair<int, int>> vp;
priority_queue<int, vector<int>, greater<int>> pq;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    while (N--)
    {
        int start, end;
        cin >> start >> end;
        vp.push_back({start, end});
    }

    sort(vp.begin(), vp.end(), cmp);

    for (int i = 0; i < vp.size(); i++)
    {
        pq.push(vp[i].second);
        if (pq.top() <= vp[i].first)
        {
            pq.pop();
        }
    }
    cout << pq.size();

    return 0;
}
