#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, temp, maxNum = -99999999;
    cin >> N >> K;
    vector<int> v(N + 1);

    v[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> temp;
        v[i] = v[i - 1] + temp;
    }
    for (int i = 0; i + K <= N; i++)
    {
        if (v[i + K] - v[i] > maxNum)
        {
            maxNum = v[i + K] - v[i];
        }
    }
    cout << maxNum;

    return 0;
}