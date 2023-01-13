#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> computers[101];
    bool visited[101] = {false};
    queue<int> q;
    int computer, link, linkOne, linkTwo, answer = 0;

    cin >> computer >> link;
    for (int i = 0; i < link; i++)
    {
        cin >> linkOne >> linkTwo;
        computers[linkOne].push_back(linkTwo);
        computers[linkTwo].push_back(linkOne);
    }

    q.push(1);
    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        if (!visited[now])
        {
            visited[now] = true;
            answer++;
            for (int i = 0; i < computers[now].size(); i++)
            {
                q.push(computers[now][i]);
            }
        }
    }
    cout << answer - 1; // 1번 컴퓨터는 제외!!!!
}