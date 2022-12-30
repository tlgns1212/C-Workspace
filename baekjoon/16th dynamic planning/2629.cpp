#include <iostream>
#include <vector>
using namespace std;

#define MAX 30

bool dp[MAX + 1][MAX * 500 + 1];
int weight, ball, temp;
vector<int> weights, balls;

void CheckWeights(int cnt, int result)
{
    if (cnt > weight)
    {
        return;
    }
    if (dp[cnt][result] == true)
    {
        return;
    }

    dp[cnt][result] = true;
    CheckWeights(cnt + 1, result + weights[cnt]);
    CheckWeights(cnt + 1, result);
    CheckWeights(cnt + 1, abs(result - weights[cnt]));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> weight;
    for (int i = 0; i < weight; i++)
    {
        cin >> temp;
        weights.push_back(temp);
    }

    CheckWeights(0, 0);

    cin >> ball;
    for (int i = 0; i < ball; i++)
    {
        cin >> temp;
        balls.push_back(temp);
    }

    for (auto i : balls)
    {
        if (i > MAX * 500)
        {
            cout << "N ";
        }
        else if (dp[weight][i])
        {
            cout << "Y ";
        }
        else
        {
            cout << "N ";
        }
    }

    return 0;
}