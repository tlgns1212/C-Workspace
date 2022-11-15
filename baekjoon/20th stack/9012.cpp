#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    bool isYes = true;
    string temp;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        stack<char> st;
        isYes = true;
        for (auto ss : temp)
        {
            if (ss == ')')
            {
                if (st.empty())
                {
                    isYes = false;
                    break;
                }
                else
                {
                    st.pop();
                }
            }
            else
            {
                st.push('(');
            }
        }
        if (!st.empty())
        {
            isYes = false;
        }
        cout << (isYes == true ? "YES" : "NO") << '\n';
    }

    return 0;
}