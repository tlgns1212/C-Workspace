#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K, num, total = 0;
    stack<int> st;
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        cin >> num;
        if (num == 0)
        {
            total -= st.top();
            st.pop();
        }
        else
        {
            total += num;
            st.push(num);
        }
    }
    cout << total;

    return 0;
}