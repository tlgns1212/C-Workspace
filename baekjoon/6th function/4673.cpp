#include <iostream>
using namespace std;

bool isnotselfnum(int num)
{
    for (int i = num - 1; i >= 0; i--)
    {
        int j = i, count = j;
        while (j)
        {
            count += j % 10;
            j /= 10;
        }
        if (count == num)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i < 10001; i++)
    {
        if (isnotselfnum(i))
            cout << i << '\n';
    }
}