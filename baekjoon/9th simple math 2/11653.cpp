#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, i = 1;
    cin >> N;
    while (N != 1)
    {
        i++;
        if (N % i == 0)
        {
            N /= i;
            cout << i << '\n';
            i = 1;
        }
        if (i == N)
        {
            break;
        }
    }
}