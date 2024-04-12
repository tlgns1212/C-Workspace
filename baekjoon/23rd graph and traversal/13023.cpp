#include <iostream>
#include <vector>
using namespace std;

int N, M, answer;
vector<int> v[2001];
bool visited[2001];
bool isAnswer;

void dfs(int me, int curNum)
{
    visited[me] = true;
    if (isAnswer)
    {
        visited[me] = false;
        return;
    }
    if (curNum == 4)
    {
        isAnswer = true;
        return;
    }
    for (int i : v[me])
    {
        if (!visited[i])
            dfs(i, curNum + 1);
    }
    visited[me] = false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        v[temp1].push_back(temp2);
        v[temp2].push_back(temp1);
    }

    for (int i = 0; i < N; i++)
    {
        if (isAnswer)
            break;
        dfs(i, 0);
    }

    cout << (isAnswer ? 1 : 0);

    return 0;
}
