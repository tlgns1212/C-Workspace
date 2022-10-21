#include <iostream>
#include <algorithm>
using namespace std;

long long twos(int n)
{
    long long cnt = 0;
    for (long i = 2; i <= n; i *= 2)
    {
        cnt += n / i;
    }
    return cnt;
}
long long fives(int n)
{
    long long cnt = 0;
    for (long i = 5; i <= n; i *= 5)
    {
        cnt += n / i;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    long long answer;

    cin >> n >> m;
    answer = min(twos(n) - twos(m) - twos(n - m), fives(n) - fives(m) - fives(n - m));
    cout << answer;

    return 0;
}