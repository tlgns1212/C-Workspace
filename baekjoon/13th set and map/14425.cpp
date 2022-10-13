#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, int> ma;
    string temp;
    int n, m, answer = 0;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        ma[temp]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        if (ma[temp] == 1)
            answer++;
    }
    cout << answer;
    return 0;
}