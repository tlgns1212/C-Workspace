#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char a[101];
    int N, sum = 0;

    cin >> N;
    cin >> a;
    for (int i = 0; i < N; i++)
    {
        sum += (int)a[i] - 48;
    }
    cout << sum;
}
