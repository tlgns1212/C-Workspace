#include <iostream>
using namespace std;

long long dividePower(int a, int b, int c)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a % c;
    }
    long long temp = dividePower(a, b / 2, c) % c;
    if (b % 2 == 0)
    {
        return temp * temp % c;
    }
    else
    {
        return temp * temp % c * a % c;
    }
}

int main()
{
    int A, B, C;
    long long answer;

    cin >> A >> B >> C;
    answer = dividePower(A, B, C);
    cout << answer;

    return 0;
}
