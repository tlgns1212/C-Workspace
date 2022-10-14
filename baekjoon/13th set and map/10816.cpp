#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, temp;
    map<int, int> m;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        m[temp]++;
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        cout << m[temp] << ' ';
    }
    return 0;
}