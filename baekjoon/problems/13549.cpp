#include <iostream>
#include <deque>
using namespace std;

const int MAXNUM = 100000 + 1;

int N, K, i;
bool visited[MAXNUM];
int answers[MAXNUM];
deque<int> dq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;
    dq.push_back(N);
    while (!dq.empty())
    {
        int n = dq.front();
        dq.pop_front();

        if (n == K)
            break;
        if (abs(K - N) >= abs(K - n * 2) && n * 2 < MAXNUM && !visited[n * 2] && n != 0)
        {
            dq.push_front(n * 2);
            answers[n * 2] = answers[n];
            visited[n * 2] = true;
        }
        if (n - 1 >= 0 && !visited[n - 1])
        {
            dq.push_back(n - 1);
            answers[n - 1] = answers[n] + 1;
            visited[n - 1] = true;
        }
        if (n + 1 < MAXNUM && !visited[n + 1])
        {
            dq.push_back(n + 1);
            answers[n + 1] = answers[n] + 1;
            visited[n + 1] = true;
        }
    }

    cout << answers[K];

    return 0;
}
