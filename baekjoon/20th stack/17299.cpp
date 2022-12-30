#include <iostream>
#include <stack>
// #include <map>
using namespace std;
int A[1000001];
int answer[1000001];
int m[1000001] = {0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    stack<int> s;
    // map<int,int> m;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        m[A[i]]++;
    }
    for (int i = N - 1; i >= 0; i--)
    {
        while (1)
        {
            if (s.empty())
            {
                answer[i] = -1;
                s.push(A[i]);
                break;
            }
            else if (m[s.top()] > m[A[i]])
            {
                answer[i] = s.top();
                s.push(A[i]);
                break;
            }
            else
            {
                s.pop();
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << answer[i] << ' ';
    }

    return 0;
}
