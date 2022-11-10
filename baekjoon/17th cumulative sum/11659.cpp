#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, i, j, temp, answer;

    cin >> N >> M;
    vector<int> v(N + 1);
    v[0] = 0;
    for (int l = 1; l <= N; l++)
    {
        cin >> temp;
        v[l] = v[l - 1] + temp;
    }
    for (int l = 0; l < M; l++)
    {
        cin >> i >> j;
        cout << v[j] - v[i - 1] << '\n';
    }

    return 0;
}