#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



    for(int Num = 1;;Num++)
    {
        stack<char> StackC;
        string s;
        int answer = 0;

        cin >> s;
        if(s[0] == '-') break;

        for(int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if(c == '}' && !StackC.empty() && StackC.top() == '{')
                StackC.pop();
            else
                StackC.push(c);
        }
        while(!StackC.empty())
        {
            char c1 = StackC.top();
            StackC.pop();
            char c2 = StackC.top();
            StackC.pop();

            if(c1 == c2) answer++;
            else answer += 2;
        }
        cout << Num << ". " << answer << '\n';
    }

    return 0;
}