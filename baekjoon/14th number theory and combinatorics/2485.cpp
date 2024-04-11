#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, tempTree, minDist = 1000000000, answer = 0;
    bool isLoop = true;
    vector<int> vTree;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> tempTree;
        vTree.push_back(tempTree);
    }
    for (int i = 0; i < vTree.size() - 1; i++)
    {
        if (vTree[i + 1] - vTree[i] < minDist)
        {
            minDist = vTree[i + 1] - vTree[i];
        }
    }
    while (isLoop)
    {
        for (int i = 0; i < vTree.size(); i++)
        {
            if ((vTree[i] - vTree[0]) % minDist != 0)
            {
                minDist--;
                break;
            }
            if (i == vTree.size() - 1)
            {
                isLoop = false;
                break;
            }
        }
    }
    for (int i = 0; i < vTree.size() - 1; i++)
    {
        answer += ((vTree[i + 1] - vTree[i]) / minDist - 1);
    }

    cout << answer;
    return 0;
}