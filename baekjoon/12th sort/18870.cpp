#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return (a.second < b.second);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, temp;
    vector<pair<int, int>> X;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        X.push_back(make_pair(temp, i));
    }
    sort(X.begin(), X.end());
    int i = 0, before = -1000000000;
    for (int idx = 0; idx < X.size(); idx++)
    {
        if (before < X[idx].first)
        {
            before = X[idx].first;
            X[idx].first = i;
        }
        else
        {
            X[idx].first = --i;
        }
        i++;
    }
    sort(X.begin(), X.end(), cmp);
    for (auto i : X)
    {
        cout << i.first << " ";
    }
}
