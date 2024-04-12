#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    long long fib[92];
    cin >> n;
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n + 1; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[n];

    return 0;
}