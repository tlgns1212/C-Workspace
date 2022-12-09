#include <iostream>
#include <queue>
using namespace std;

struct cmp // 우선순위 큐를 위한 비교연산자
{
    bool operator()(int a, int b)
    {
        if (abs(a) == abs(b)) // 절대값이 같으면
        {
            return (a > b ? true : false); // 작은 수 우선
        }
        return abs(a) > abs(b); // 이것도 똑같이 절대값이 작은 수 우선
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    long long x;
    priority_queue<long long, vector<long long>, cmp> pq; // 우선순위 큐를 사용하기 위해 <자료형, 구현체, 비교연산자>를 지정한다. 지정하지 않으면 가장 큰수를 먼저 출력하는 형식
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x;
        if (x == 0)
        {
            if (pq.empty())
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else
        {
            pq.push(x);
        }
    }

    return 0;
}