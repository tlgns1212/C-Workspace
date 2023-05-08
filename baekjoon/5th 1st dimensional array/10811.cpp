#include <iostream>
using namespace std;

int main()
{
    int N, M, i, j, v[101], tempV[101];
    cin >> N >> M;
    for (int idx = 1; idx <= N; idx++)
    {
        v[idx] = idx;
    }
    for (int t = 0; t < M; t++)
    {
        cin >> i >> j;
        for (int idx = 0; idx <= j - i; idx++)
        {
            tempV[idx] = v[j - idx];
        }
        for (int idx = 0; idx <= j - i; idx++)
        {
            v[i + idx] = tempV[idx];
        }
    }
    for (int idx = 1; idx <= N; idx++)
    {
        cout << v[idx] << ' ';
    }
    return 0;
}