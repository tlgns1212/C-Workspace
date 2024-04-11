#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, age;
    string name;
    cin >> N;
    vector<pair<int, string>> vp(N);
    for (int i = 0; i < N; i++)
    {
        cin >> age >> name;
        vp[i] = make_pair(age, name);
    }
    stable_sort(vp.begin(), vp.end(), compare);

    for (int i = 0; i < N; i++)
    {
        cout << vp[i].first << ' ' << vp[i].second << '\n';
    }

    return 0;
}