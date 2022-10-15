#include <iostream>
#include <set>

using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    fastio;
    int N, M, temp;
    set<int> A, B;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        A.insert(temp);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        B.insert(temp);
    }
    for (auto i : A)
    {
        if (B.find(i) != B.end())
            N--;
    }
    for (auto i : B)
    {
        if (A.find(i) != A.end())
            M--;
    }
    cout << N + M;
    return 0;
}