#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXNUM = 2000000002;

int N, answer = MAXNUM, answers[2];
vector<int> pos, neg;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        if (temp >= 0)
            pos.push_back(temp);
        else
            neg.push_back(temp);
    }
    sort(pos.begin(), pos.end());
    sort(neg.rbegin(), neg.rend());

    if (pos.size() >= 2)
    {
        answer = pos[0] + pos[1];
        answers[0] = pos[0];
        answers[1] = pos[1];
    }
    if (neg.size() >= 2)
    {
        if (answer > -neg[0] - neg[1])
        {
            answer = -neg[0] - neg[1];
            answers[0] = neg[1];
            answers[1] = neg[0];
        }
    }
    int left = 0, right = 0;
    int pSize = pos.size(), nSize = neg.size();
    while (left < nSize && right < pSize)
    {
        int nNum = -neg[left];
        int pNum = pos[right];
        if (pNum - nNum == 0)
        {
            answer = 0;
            answers[0] = -nNum;
            answers[1] = pNum;
            break;
        }
        else if (pNum - nNum < 0)
        {
            right++;
        }
        else
        {
            left++;
        }
        if (answer > abs(pNum - nNum))
        {
            answer = abs(pNum - nNum);
            answers[0] = -nNum;
            answers[1] = pNum;
        }
    }

    cout << answers[0] << ' ' << answers[1];

    return 0;
}
