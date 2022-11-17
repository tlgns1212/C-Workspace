#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp, nowSize = 0;
    queue<int> q;

    cin >> N;
    while (cin >> temp)
    {
        if (temp == -1)
        {
            break;
        }
        else if (temp == 0)
        {
            if (q.empty())
            {
                break;
            }
            q.pop();
            nowSize--;
        }
        else
        {
            if (nowSize < N)
            {
                q.push(temp);
                nowSize++;
            }
        }
    }
    if (q.empty())
    {
        cout << "empty";
    }
    while (!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
    }

    return 0;
}
