#include <iostream>
using namespace std;

int main()
{
    int v[101];
    int N, M, i, j, temp;
    cin >> N >> M;
    for (int idx = 1; idx <= N; idx++)
    {
        v[idx] = idx;
    }
    for (int _ = 0; _ < M; _++)
    {
        cin >> i >> j;
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    for (int idx = 1; idx <= N; idx++)
    {
        cout << v[idx] << ' ';
    }
}