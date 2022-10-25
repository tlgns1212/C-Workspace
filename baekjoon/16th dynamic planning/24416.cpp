#include <iostream>
using namespace std;
int cnt = 1;

int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    cnt++;
    return (fib(n - 1) + fib(n - 2));
}

int main()
{

    int n, count = 0;
    int f[41] = {
        0,
    };
    cin >> n;

    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        count++;
        f[i] = f[i - 1] + f[i - 2];
    }
    fib(n);
    cout << cnt << ' ' << count;

    return 0;
}