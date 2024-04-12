#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<int> V(N + 1, 0);
    int countA = 0;
    int countB = M;

    for (int i = 0; i < M; i++)
    {
        int a, c;
        char b;
        cin >> a >> b >> c;
        if ((b == 'M' && c == 1) || (b == 'P' && c == 0) && V[a] < 4)
        {
            countB--;
            V[a] = 4;
        }
        if (b == 'M' && c == 0)
        {
            if (V[a] == 2)
            {
                countA++;
                V[a] = 4;
            }
            else if (V[a] == 0)
            {
                V[a] = 1;
            }
        }
        if (b == 'P' && c == 1)
        {
            if (V[a] == 1)
            {
                countA++;
                V[a] = 4;
            }
            else if (V[a] == 0)
            {
                V[a] = 2;
            }
        }
    }
    cout << countA << ' ' << countB;
}