#include <iostream>
using namespace std;
int store[21][21][21];

// 메모이제이션이 매우 중요했었음, 이거 안하면 아예 50 50 50입력받으면 렉 걸리면서 실행 안될정도로 dfs를 많이함, 메모이제이션!!!!!

int dfs(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    else if (a > 20 || b > 20 || c > 20)
        return dfs(20, 20, 20);
    else if (store[a][b][c])
        return store[a][b][c];
    else if (a < b && b < c)
    {
        store[a][b][c] = dfs(a, b, c - 1) + dfs(a, b - 1, c - 1) - dfs(a, b - 1, c);
        return store[a][b][c];
    }
    else
    {
        store[a][b][c] = dfs(a - 1, b, c) + dfs(a - 1, b - 1, c) + dfs(a - 1, b, c - 1) - dfs(a - 1, b - 1, c - 1);
        return store[a][b][c];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    while (1)
    {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
            break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << dfs(a, b, c) << '\n';
    }

    return 0;
}