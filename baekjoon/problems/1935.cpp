#include <iostream>
#include <string>
#include <stack>
using namespace std;

int N, nums[27];
double answer;
string s;
stack<double> st;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> s;
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    for (char c : s)
    {
        if (isalpha(c))
        {
            st.push(nums[c - 'A']);
        }
        else
        {
            double second = st.top();
            st.pop();
            double first = st.top();
            st.pop();

            switch (c)
            {
            case '-':
                st.push(first - second);
                break;
            case '+':
                st.push(first + second);
                break;
            case '*':
                st.push(first * second);
                break;
            case '/':
                st.push(first / second);
                break;
            }
        }
    }
    cout.precision(2);
    cout << fixed << st.top();

    return 0;
}

// 5
// ABC*+DE/-
// 1
// 2
// 3
// 4
// 5

// 6.20