#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, temp;
    map<int, int> A;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        A[temp]++;
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> temp;

        if (A[temp])
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }

    return 0;
}