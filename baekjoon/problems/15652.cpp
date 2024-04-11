#include <iostream>
using namespace std;
#define MAX 9

int N, M;
bool visited[MAX];
int arr[MAX];

void dfs(int cnt, int now)
{
    if (cnt == M)
    {
        for (int i = 0; i < cnt; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
    else
    {
        for (int i = now; i <= N; i++)
        {
            if (!visited[i] && i >= now)
            {
                arr[cnt] = i;
                dfs(cnt + 1, i);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    dfs(0, 1);

    return 0;
}