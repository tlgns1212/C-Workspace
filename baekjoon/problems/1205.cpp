#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, myScore, P, ranking = 1, score, sameNums = 0;

    cin >> N >> myScore >> P;
    for (int i = 0; i < N; i++)
    {
        cin >> score;
        if (score > myScore)
            ranking++;
        else if (score == myScore)
            sameNums++;
    }

    cout << (ranking > P ? -1 : (P - ranking >= sameNums ? ranking : -1));

    return 0;
}