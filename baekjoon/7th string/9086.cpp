#include <iostream>
using namespace std;

int main()
{
    string s;
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> s;
        cout << s[0] << s[s.length() - 1] << '\n';
    }
    return 0;
}