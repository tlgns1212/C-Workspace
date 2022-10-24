#include <iostream>
#include <vector>
using namespace std;

int N, add, minu, multi, divide, minA = 1000000001, maxA = -1000000001;
vector<int> A;

void dfs(int cnt, int now)
{
    if (cnt == N)
    {
        if (now < minA)
        {
            minA = now;
        }
        if (now > maxA)
        {
            maxA = now;
        }
        return;
    }
    for (int i = 0; i < add; i++)
    {
        add--;
        dfs(cnt + 1, now + A[cnt]);
        add++;
    }
    for (int i = 0; i < minu; i++)
    {
        minu--;
        dfs(cnt + 1, now - A[cnt]);
        minu++;
    }
    for (int i = 0; i < multi; i++)
    {
        multi--;
        dfs(cnt + 1, now * A[cnt]);
        multi++;
    }
    for (int i = 0; i < divide; i++)
    {
        divide--;
        dfs(cnt + 1, now / A[cnt]);
        divide++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int temp;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }
    cin >> add >> minu >> multi >> divide;

    dfs(1, A[0]);
    cout << maxA << '\n'
         << minA;
    return 0;
}