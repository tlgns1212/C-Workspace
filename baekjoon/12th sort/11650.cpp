#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
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

    int N;
    cin >> N;
    vector<pair<int, int>> pos(N);

    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        pos[i] = (make_pair(x, y));
    }
    sort(pos.begin(), pos.end(), compare);
    for (int i = 0; i < N; i++)
    {
        cout << pos[i].first << ' ' << pos[i].second << '\n';
    }
    return 0;
}