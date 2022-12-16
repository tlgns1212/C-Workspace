#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, temp;
    bool isDone = true;
    priority_queue<int, vector<int>, less<int>> box;
    queue<int> present;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        box.push(temp);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        present.push(temp);
    }
    while (!present.empty())
    {
        temp = box.top() - present.front();
        if (temp > 0)
        {
            box.pop();
            box.push(temp);
            present.pop();
        }
        else if (temp == 0)
        {
            box.pop();
            present.pop();
        }
        else
        {
            isDone = false;
            break;
        }
    }
    if (isDone)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}