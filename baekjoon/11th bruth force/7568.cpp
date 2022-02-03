#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x[51][2], rank = 1;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x[i][0] >> x[i][1];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (x[i][0] < x[j][0] && x[i][1] < x[j][1])
                rank++;
        }
        cout << rank << ' ';
        rank = 1;
    }
}