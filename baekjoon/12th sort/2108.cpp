#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;
typedef pair<int, int> ii;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    int N, idx = 0, max = 0, temp = 0, before = -4001, aver = 0, diff = 0;
    bool isFirst = true;
    map<int, int> m;
    cin >> N;
    vector<int> x(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> x[i];
        m[x[i]]++;
    }
    sort(x.begin(), x.end());
    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);
    int i = 0, counts = 0;
    for (auto it : v)
    {
        if (i == 0)
        {
            counts = it.second;
            idx = it.first;
        }
        else if (i == 1)
        {
            if (counts == it.second)
            {
                idx = it.first;
            }
            break;
        }
        i++;
    }
    diff = abs(x[0] - x[N - 1]);
    for (int i = 0; i < N; i++)
    {
        aver += x[i];
    }
    cout << round((float)aver / N) << '\n'
         << x[(N - 1) / 2] << '\n'
         << idx << '\n'
         << diff;
}