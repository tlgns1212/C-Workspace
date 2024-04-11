#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, count = 0, temp, queuestack[100001], M, C;
    queue<int> qB;
    stack<int> sB;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        queuestack[i] = temp;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        if (queuestack[i] == 0)
        {
            sB.push(temp);
        }
    }
    while (!sB.empty())
    {
        qB.push(sB.top());
        sB.pop();
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> C;
        qB.push(C);
        cout << qB.front() << ' ';
        qB.pop();
    }
}