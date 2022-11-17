#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp;
    string s;
    queue<int> q;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        if (s == "push")
        {
            cin >> temp;
            q.push(temp);
        }
        else if (s == "pop")
        {
            if (q.empty())
            {
                cout << "-1" << '\n';
            }
            else
            {
                temp = q.front();
                q.pop();
                cout << temp << '\n';
            }
        }
        else if (s == "size")
        {
            cout << q.size() << '\n';
        }
        else if (s == "empty")
        {
            if (q.empty())
            {
                cout << '1' << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (s == "front")
        {
            if (q.empty())
            {
                cout << "-1" << '\n';
            }
            else
            {
                cout << q.front() << '\n';
            }
        }
        else if (s == "back")
        {
            if (q.empty())
            {
                cout << "-1" << '\n';
            }
            else
            {
                cout << q.back() << '\n';
            }
        }
    }

    return 0;
}
