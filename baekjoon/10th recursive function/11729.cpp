#include <iostream>
using namespace std;

void hanoi(int n, int start, int to, int bypass)
{
    if (n == 1)
    {
        cout << start << ' ' << to << '\n';
    }
    else
    {
        hanoi(n - 1, start, bypass, to);
        cout << start << ' ' << to << '\n';
        hanoi(n - 1, bypass, to, start);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    // 1<<n은 1을 left shift n번을 하겠다는 말인데, 이진수는 2의 배수로 증가하니깐
    // 1 << 3같은 경우에는 2의 3제곱해서 8을 고르겠다는 것과 같다.
    // 해당 출력은 2^n - 1이다.
    hanoi(n, 1, 3, 2);
}