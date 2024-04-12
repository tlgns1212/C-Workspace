#include <iostream>
using namespace std;

string s;
int zeros, ones;

void solution()
{
    int index = 0, goal = ones / 2, count = 0;
    while (count < goal)
    {
        if (s[index] == '1')
        {
            s[index] = '2';
            count++;
        }
        index++;
    }
    index = s.length() - 1;
    goal = zeros / 2;
    count = 0;
    while (count < goal)
    {
        if (s[index] == '0')
        {
            s[index] = '2';
            count++;
        }
        index--;
    }

    for (char c : s)
    {
        if (c == '1' || c == '0')
            cout << c;
    }
}

void input()
{
    cin >> s;
    for (char c : s)
    {
        if (c == '0')
            zeros++;
        else
            ones++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();
}
