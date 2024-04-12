#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 16

int N;
int T[MAX], P[MAX];
int arr[MAX];

void dfs()
{
    int deadLine;
    for (int i = N; i > 0; i--)
    {
        deadLine = i + T[i];
        if (deadLine > N + 1)
        {
            arr[i] = arr[i + 1];
        }
        else
        {
            arr[i] = max(arr[i + 1], arr[deadLine] + P[i]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> T[i] >> P[i];
    }

    dfs();
    cout << arr[1];

    return 0;
}