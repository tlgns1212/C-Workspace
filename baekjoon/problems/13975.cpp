
#include <iostream>
#include <queue>
using namespace std;

int T, K;
long long answer;
priority_queue<long long, vector<long long>, greater<long long>> pq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while (T--)
    {
        answer = 0;
        while (!pq.empty())
            pq.pop();
        cin >> K;
        for (int i = 0; i < K; i++)
        {
            int temp;
            cin >> temp;
            pq.push(temp);
        }
        while (pq.size() > 1)
        {
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            answer += a + b;
            pq.push(a + b);
        }
        cout << answer << '\n';
    }

    return 0;
}
