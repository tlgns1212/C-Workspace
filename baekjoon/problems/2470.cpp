#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, answer = 2000000003, answers[2];
vector<int> neg, pos;

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
    sort(neg.begin(), neg.end(), greater<int>());

    int ni = 0, pi = 0, nSize = neg.size(), pSize = pos.size();

    if (neg.size() >= 2)
    {
        answer = -neg[0] - neg[1];
        answers[0] = neg[1];
        answers[1] = neg[0];
    }
    if (pos.size() >= 2)
    {
        if (answer > pos[0] + pos[1])
        {
            answer = pos[0] + pos[1];
            answers[0] = pos[0];
            answers[1] = pos[1];
        }
    }

    while (ni < nSize && pi < pSize)
    {
        int nn = abs(neg[ni]);
        int pp = pos[pi];
        if (nn == pp)
        {
            answers[0] = -nn;
            answers[1] = pp;
            break;
        }
        else if (nn > pp)
        {
            if (answer > nn - pp)
            {
                answer = nn - pp;
                answers[0] = -nn;
                answers[1] = pp;
            }
            pi++;
        }
        else
        {
            if (answer > pp - nn)
            {
                answer = pp - nn;
                answers[0] = -nn;
                answers[1] = pp;
            }
            ni++;
        }
    }
    cout << answers[0] << ' ' << answers[1];

    return 0;
}