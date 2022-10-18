#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = 0;
    int size = s.size();
    char tempC;
    for (int i = 0; i < size; i++)
    {
        stack<char> st;
        st.push(s[i]);
        for (int j = i + 1; j < size + i; j++)
        {
            tempC = st.top();
            if (st.empty() && (s[j % size] == '}' || s[j % size] == ')' || s[j % size] == ']'))
                break;
            else if (s[j % size] == '{' || s[j % size] == '(' || s[j % size] == '[')
                st.push(s[j % size]);
            else if (s[j % size] == '}')
            {
                if (tempC == '{')
                    st.pop();
                else
                    break;
            }
            else if (s[j % size] == ']')
            {
                if (tempC == '[')
                    st.pop();
                else
                    break;
            }
            else if (s[j % size] == ')')
            {
                if (tempC == '(')
                    st.pop();
                else
                    break;
            }
            if (j == size + i - 1 && st.empty())
            {
                answer++;
            }
        }
    }
    return answer;
}