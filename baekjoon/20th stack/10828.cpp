#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp;
    string getS;
    stack<int> si;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> getS;
        if (getS == "push")
        {
            cin >> temp;
            si.push(temp);
        }
        else if (getS == "pop")
        {
            if (si.empty())
            {
                cout << "-1" << '\n';
            }
            else
            {
                cout << si.top() << '\n';
                si.pop();
            }
        }
        else if (getS == "size")
        {
            cout << si.size() << '\n';
        }
        else if (getS == "empty")
        {
            cout << si.empty() << '\n';
        }
        else if (getS == "top")
        {
            if (si.empty())
            {
                cout << "-1" << '\n';
            }
            else
            {
                cout << si.top() << '\n';
            }
        }
    }
    return 0;
}