#include <iostream>
using namespace std;

int N, M;
int array[9];
int visited[9];

void dfs(int cnt)
{
    if (cnt == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << array[i] << ' ';
        }
        cout << '\n';
    }
    else
    {
        for (int i = 1; i <= N; i++)
        {
            if (!visited[i])
            {
                visited[i] = true;
                array[cnt] = i;
                dfs(cnt + 1);
                visited[i] = false;
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

    dfs(0);
    return 0;
}