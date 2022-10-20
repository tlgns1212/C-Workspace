#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n, answer;
    map<string, int> m;
    string s1, s2;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        answer = 1;
        for (int j = 0; j < n; j++)
        {
            cin >> s1 >> s2;
            m[s2]++;
        }
        for (auto mm : m)
        {
            answer *= mm.second + 1;
        }
        m.clear();
        cout << answer - 1 << '\n';
    }
    return 0;
}