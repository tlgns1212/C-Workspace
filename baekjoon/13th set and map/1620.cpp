#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, tempI;
    string name;
    cin >> N >> M;
    vector<string> v(N + 1);
    map<string, int> m;
    for (int i = 1; i <= N; i++)
    {
        cin >> name;
        m[name] = i;
        v[i] = name;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> name;
        if (name[0] - 57 <= 0)
        {
            int num = stoi(name);
            cout << v[num] << '\n';
        }
        else
        {
            cout << m[name] << '\n';
        }
    }

    return 0;
}