#include <iostream>
#include <queue>
using namespace std;

struct problem
{
    long long deadline;
    long long ramen;

    problem(long long _deadline, long long _ramen)
    {
        deadline = _deadline;
        ramen = _ramen;
    }
};

struct compare
{
    bool operator()(const problem a, const problem b)
    {
        if (a.deadline == b.deadline)
            return a.ramen < b.ramen;
        return a.deadline > b.deadline;
    }
};

int N, index;
long long answer;
priority_queue<problem, vector<problem>, compare> pq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        long long deadline, ramen;
        cin >> deadline >> ramen;
        pq.push(problem(deadline, ramen));
    }

    while (!pq.empty())
    {
        long long deadline = pq.top().deadline;
        long long ramen = pq.top().ramen;
        pq.pop();
        if (index < deadline)
        {
            index = deadline;
            answer += ramen;
        }
    }
    cout << answer;

    return 0;
}
