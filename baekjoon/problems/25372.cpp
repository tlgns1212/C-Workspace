#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string s;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        if (s.size() >= 6 && s.size() <= 9)
        {
            cout << "yes" << '\n';
        }
        else
        {
            cout << "no" << '\n';
        }
    }
    return 0;
}