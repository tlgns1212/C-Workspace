#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    int temp;
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
        if (m[temp] == 1)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }

    return 0;
}