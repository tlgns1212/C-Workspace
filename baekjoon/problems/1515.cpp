#include <iostream>
#include <string>
using namespace std;

string N;

void input()
{
    cin >> N;
}

int solution()
{
    int index = 0;
    int totalLen = N.length();
    for (int i = 1; i <= 30000; i++)
    {
        string num = to_string(i);
        for (char c : num)
        {
            if (c == N[index])
            {
                if (++index == totalLen)
                    return i;
            }
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    cout << solution();
    return 0;
}