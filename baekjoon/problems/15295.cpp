#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int P, K, N;

    cin >> P;
    for (int i = 0; i < P; i++)
    {
        int all = 0;
        cin >> K >> N;
        for (int j = 1; j <= N; j++)
        {
            all += j;
        }
        all += N;
        cout << K << ' ' << all << '\n';
    }
}