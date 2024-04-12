#include <iostream>
#include <vector>
using namespace std;

int N, X, sums[250002], maxNum, maxCount;
vector<int> v;

void input()
{
    int temp;
    cin >> N >> X;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
}

void solution()
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += v[i];
        sums[i + 1] = sum;
    }
    for (int i = X; i <= N; i++)
    {
        if (sums[i] - sums[i - X] > maxNum)
        {
            maxCount = 1;
            maxNum = sums[i] - sums[i - X];
        }
        else if (sums[i] - sums[i - X] == maxNum)
        {
            maxCount++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();

    if (maxNum == 0)
        cout << "SAD";
    else
    {
        cout << maxNum << '\n'
             << maxCount;
    }

    return 0;
}