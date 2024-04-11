#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long X, Y, W, S;
    cin >> X >> Y >> W >> S;

    long long answer = 0;
    if (2 * W <= S)
    {
        answer = X * W + Y * W;
    }
    else if (S <= W)
    {
        long long oneWay = abs(X - Y);
        long long diagWay = min(X, Y);
        answer = diagWay * S;
        answer += oneWay * S;
        if (oneWay % 2 == 1)
        {
            answer -= S;
            answer += W;
        }
    }
    else
    {
        long long oneWay = abs(X - Y);
        long long diagWay = min(X, Y);
        answer = oneWay * W + diagWay * S;
    }

    cout << answer;

    return 0;
}