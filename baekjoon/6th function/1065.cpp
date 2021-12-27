#include <iostream>
using namespace std;

bool isHansoo(int N)
{
    int changed, a;
    if (N < 100)
        return true;
    else
    {
        changed = N % 10 - (N / 10) % 10;
        a = N % 10;
        N /= 10;
        while (N)
        {
            if (changed != (a - N % 10))
                return false;
            a = N % 10;
            N /= 10;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, count = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (isHansoo(i) == true)
            count++;
    }
    cout << count;
}