#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<int> v(N + 1);
    v[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        int temp;
        cin >> temp;
        v[i] = v[i - 1] + temp;
    }
    for (int i = 0; i < M; i++)
    {
        int start, end;
        cin >> start >> end;
        cout << v[end] - v[start - 1] << '\n';
    }

    return 0;
}