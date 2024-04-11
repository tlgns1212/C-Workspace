#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    string name;
    map<string, int> m;
    vector<string> v;

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> name;
        m[name]++;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> name;
        m[name]++;
        if (m[name] == 2)
        {
            v.push_back(name);
        }
    }
    sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for (string s : v)
    {
        cout << s << '\n';
    }

    return 0;
}