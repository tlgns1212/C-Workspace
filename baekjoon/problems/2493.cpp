#include <iostream>
#include <stack>
using namespace std;

int N;
stack<pair<int, int>> st;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int height;
        cin >> height;
        while (!st.empty())
        {
            if (height < st.top().second)
            {
                cout << st.top().first << ' ';
                break;
            }
            else
            {
                st.pop();
            }
        }
        if (st.empty())
        {
            cout << "0 ";
        }
        st.push({i, height});
    }
    return 0;
}
// 5
// 6 9 5 7 4

// 0 0 2 2 4