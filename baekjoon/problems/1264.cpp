#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int cnt;

    while (1)
    {
        getline(cin, s);
        cnt = 0;
        if (s.size() == 1 && s[0] == '#')
        {
            break;
        }
        for (int i = 0; i < s.size(); i++)
        {
            char c = tolower(s[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
