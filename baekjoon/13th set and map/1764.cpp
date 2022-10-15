#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    fastio;
    int N, M;
    string temp;
    map<string, int> m;
    vector<string> s;
    s.reserve(N);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        m[temp]++;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        m[temp]++;
    }
    for (auto mm : m)
    {
        if (mm.second > 1)
            s.push_back(mm.first);
    }
    cout << s.size() << '\n';
    for (auto ss : s)
    {
        cout << ss << '\n';
    }
    return 0;
}