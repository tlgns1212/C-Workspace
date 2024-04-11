#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    bool prevIsLeft = false;
    int answer = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        bool isLeft = s[i] == '(';
        if (i == 0)
            answer += 10;
        else if (prevIsLeft == isLeft)
            answer += 5;
        else
            answer += 10;

        prevIsLeft = isLeft;
    }
    cout << answer;

    return 0;
}