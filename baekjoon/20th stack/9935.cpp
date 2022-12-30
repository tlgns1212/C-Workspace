#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, bomb, answer = "";
    int bombSize, idx = 0, cnt;

    cin >> s;
    cin >> bomb;

    bombSize = bomb.size();
    for (int i = 0; i < s.size(); i++)
    {
        answer += s[i];

        if (answer[answer.size() - 1] == bomb[bombSize - 1])
        {
            if (answer.size() >= bombSize)
            {
                cnt = 0;
                for (int j = 0; j < bombSize; j++)
                {
                    if (answer[answer.size() - 1 - j] == bomb[bombSize - 1 - j])
                    {
                        cnt++;
                    }
                }
                if (cnt == bombSize)
                {
                    for (int j = 0; j < bombSize; j++)
                    {
                        answer.pop_back();
                    }
                }
            }
        }
    }
    if (answer.size() == 0)
    {
        cout << "FRULA";
    }
    else
    {
        cout << answer;
    }

    return 0;
}