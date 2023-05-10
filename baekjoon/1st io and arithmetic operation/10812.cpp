#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N, M, V[101], i, j, k, goal;
    queue<int> q;
    cin >> N >> M;
    for (int t = 1; t <= N; t++)
    {
        V[t] = t;
    }
    while (M--)
    {
        cin >> i >> j >> k;
        goal = k;
        while (k != goal || q.size() == 0)
        {
            q.push(V[k]);
            k++;
            if (k > j)
            {
                k = i;
            }
        }
        for (int t = i; t <= j; t++)
        {
            V[t] = q.front();
            q.pop();
        }
    }
    for (int t = 1; t <= N; t++)
    {
        cout << V[t] << ' ';
    }
    return 0;
}