#include <iostream>
#include <queue>
using namespace std;

int N;
queue<int> q;

void input()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }
}

int getAnswer()
{
    while (q.size() != 1)
    {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    return q.front();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    cout << getAnswer();

    return 0;
}
