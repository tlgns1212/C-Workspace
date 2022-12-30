#include <iostream>
#include <stack>
using namespace std;
int A[1000001];
int answer[1000001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    stack<int> st;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = N - 1; i >= 0; i--)
    {
        while (true)
        {
            if (st.empty())
            {
                st.push(A[i]);
                answer[i] = -1;
                break;
            }
            else if (st.top() > A[i])
            {
                answer[i] = st.top();
                st.push(A[i]);
                break;
            }
            else
            {
                st.pop();
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << answer[i] << ' ';
    }

    return 0;
}
