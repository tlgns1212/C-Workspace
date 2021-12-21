#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int C, N, temp[1001] = {}, count = 0;
    double aver = 0;
    cin >> C;
    while (C--)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> temp[i];
            aver += temp[i];
        }
        aver /= N;
        for (int i = 0; i < N; i++)
        {
            if (temp[i] > aver)
                count++;
        }
        cout << fixed;
        cout.precision(3);
        cout << double(count) / N * 100 << '%' << '\n';
        count = 0;
        aver = 0;
    }
}