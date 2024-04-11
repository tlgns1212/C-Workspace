
#include <iostream>
#include <queue>
using namespace std;

int n, m;
long long answer;
priority_queue<long long, vector<long long>, greater<long long>> pq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        pq.push(temp);
    }
    for (int i = 0; i < m; i++)
    {
        long long first = pq.top();
        pq.pop();
        long long second = pq.top();
        pq.pop();
        long long sum = first + second;
        pq.push(sum);
        pq.push(sum);
    }
    while (!pq.empty())
    {
        answer += pq.top();
        pq.pop();
    }
    cout << answer;

    return 0;
}
// 3 1
// 3 2 6

// 16