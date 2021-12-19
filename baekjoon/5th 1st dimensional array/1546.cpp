#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, max = 0, sum[1000] = {};
    double aver = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> sum[i];
        if (max < sum[i])
            max = sum[i];
    }
    for (int i = 0; i < N; i++)
    {
        aver += sum[i] / (double)max * 100;
    }
    cout << aver / N;
}