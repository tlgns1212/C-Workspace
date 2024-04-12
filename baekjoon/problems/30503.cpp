#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, Q, start, l, r, k;
    cin >> N;
    vector<int> V(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> V[i];
    }
    cin >> Q;
    for (int i = 1; i <= Q; i++)
    {
        int count = 0;
        cin >> start;
        if (start == 1)
        {
            cin >> l >> r >> k;
            for (int j = l; j <= r; j++)
            {
                if (V[j] == k)
                    count++;
            }
            cout << count << '\n';
        }
        else
        {
            cin >> l >> r;
            for (int j = l; j <= r; j++)
            {
                V[j] = 0;
            }
        }
    }
}