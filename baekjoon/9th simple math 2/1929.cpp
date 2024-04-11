#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    bool arr[1000001];
    cin >> N >> M;
    arr[0] = arr[1] = true;
    for (int i = 2; i * i <= M; i++)
    {
        if (arr[i])
            continue;
        else
        {
            for (int j = 2; j * i <= M; j++)
            {
                arr[i * j] = true;
            }
        }
    }
    for (int i = N; i <= M; i++)
    {
        if (!arr[i])
            cout << i << '\n';
    }

    return 0;
}