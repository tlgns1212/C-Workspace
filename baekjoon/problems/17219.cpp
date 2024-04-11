
#include <iostream>
#include <map>
using namespace std;

int N, M;
map<string, string> m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        m[s1] = s2;
    }
    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        cout << m[s] << '\n';
    }

    return 0;
}
