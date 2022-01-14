#include <iostream>
using namespace std;

bool isPrimeNum(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i * j == n)
            {
                return false;
            }
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
    while (N--)
    {
        int n;
        cin >> n;
        if (isPrimeNum(n))
        {
            count++;
        }
    }
    cout << count;
}