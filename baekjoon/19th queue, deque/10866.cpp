#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp;
    string s;
    deque<int> dq;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        if (s == "push_front")
        {
            cin >> temp;
            dq.push_front(temp);
        }
        else if (s == "push_back")
        {
            cin >> temp;
            dq.push_back(temp);
        }
        else if (s == "pop_front")
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (s == "pop_back")
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if (s == "size")
        {
            cout << dq.size() << '\n';
        }
        else if (s == "empty")
        {
            if (dq.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (s == "front")
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.front() << '\n';
            }
        }
        else if (s == "back")
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.back() << '\n';
            }
        }
    }

    return 0;
}