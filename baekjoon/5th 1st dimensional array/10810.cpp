#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M, i, j, k;
    cin >> N >> M;
    vector<int> v;
    v.resize(N + 1);
    for (int temp = 0; temp < M; temp++)
    {
        cin >> i >> j >> k;
        for (int idx = i; idx <= j; idx++)
        {
            v[idx] = k;
        }
    }
    for (int idx = 1; idx <= N; idx++)
    {
        cout << v[idx] << ' ';
    }
    return 0;
}