#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    map<string, int> m;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 1; j + i <= s.size(); j++)
        {
            m[s.substr(i, j)]++;
        }
    }
    cout << m.size();
    return 0;
}