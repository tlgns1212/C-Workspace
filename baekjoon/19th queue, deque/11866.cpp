#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N, K, temp, count = 0;
    queue<int> q;

    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }
    cout << '<';
    while (1)
    {
        for (int i = 0; i < K - 1; i++)
        {
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        temp = q.front();
        q.pop();
        count++;
        cout << temp;
        if (count == N)
        {
            break;
        }
        cout << ", ";
    }
    cout << '>';

    return 0;
}
