#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<int> coins;
int value[10001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        coins.push_back(temp);
    }
    value[0] = 1;
    for (int coin : coins)
    {
        for (int i = coin; i <= k; i++)
        {
            value[i] += value[i - coin];
        }
    }
    cout << value[k];
    return 0;
}