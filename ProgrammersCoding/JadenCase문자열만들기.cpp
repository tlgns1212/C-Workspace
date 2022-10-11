#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    char before = s[0];
    if (isalpha(before))
    {
        answer += toupper(before);
    }
    else
    {
        answer += before;
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (before == ' ')
        {
            if ((s[i] >= 'a' && s[i] <= 'z'))
                answer += toupper(s[i]);
            else
                answer += s[i];
        }
        else
        {
            if (isupper(s[i]))
                answer += tolower(s[i]);
            else
                answer += s[i];
        }
        before = s[i];
    }
    return answer;
}