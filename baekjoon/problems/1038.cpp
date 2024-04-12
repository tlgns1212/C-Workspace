#include <iostream>
#include <queue>
using namespace std;

int N, cnt = -1;
long long answer = -1;
queue<long long> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < 10; i++)
    {
        q.push(i);
    }
    while (!q.empty())
    {
        long long num = q.front();
        q.pop();
        cnt++;
        if (cnt == N)
        {
            answer = num;
            break;
        }
        if (num >= 9876543211)
            break;

        int lastDigit = num % 10;
        for (int i = 0; i < lastDigit; i++)
        {
            q.push(num * 10 + i);
        }
    }
    cout << answer << '\n';

    return 0;
}
