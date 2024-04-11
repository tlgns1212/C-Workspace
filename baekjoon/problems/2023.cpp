#include <iostream>
using namespace std;

int N;

bool IsPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void dfs(int num, int cnt)
{
    if (cnt == N)
        cout << num << '\n';

    for (int i = 1; i < 10; i += 2)
    {
        int number = num * 10 + i;
        if (IsPrime(number))
            dfs(number, cnt + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    dfs(2, 1);
    dfs(3, 1);
    dfs(5, 1);
    dfs(7, 1);

    return 0;
}
