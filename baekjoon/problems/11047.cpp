#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, count = 0;
    cin >> N >> K;
    vector<int> coins(N);
    for (int i = 0; i < N; i++)
    {
        cin >> coins[i];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        if (K / coins[i] >= 1)
        {
            count += K / coins[i];
            K -= ((K / coins[i]) * coins[i]);
        }
    }
    cout << count;

    return 0;
}