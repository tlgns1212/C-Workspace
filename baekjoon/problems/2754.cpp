#include <iostream>
#include <string>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    string s;
    float answer = 0;
    cin >> s;

    if (s[0] == 'A')
        answer += 4;
    else if (s[0] == 'B')
        answer += 3;
    else if (s[0] == 'C')
        answer += 2;
    else if (s[0] == 'D')
        answer += 1;
    if (s.length() > 1)
    {
        if (s[1] == '+')
            answer += 0.3;
        else if (s[1] == '-')
            answer -= 0.3;
    }
    printf("%.1f", answer);

    return 0;
}