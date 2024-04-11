#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, start, end, cnt = 0, time;
    cin >> N;
    vector<pair<int, int>> vp(N);
    vector<int> dp(N + 1);

    for (int i = 0; i < N; i++)
    {
        cin >> start >> end;
        vp[i] = make_pair(end, start);
    }
    sort(vp.begin(), vp.end());

    time = vp[0].first;
    cnt++;
    for (int i = 1; i < N; i++)
    {
        if (vp[i].second >= time)
        {
            time = vp[i].first;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}