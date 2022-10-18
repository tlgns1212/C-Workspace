#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, first, temp, tempgcd;

    cin >> N;
    cin >> first;
    for (int i = 0; i < N - 1; i++)
    {
        cin >> temp;
        tempgcd = gcd(first, temp);
        cout << first / tempgcd << '/' << temp / tempgcd << '\n';
    }

    return 0;
}