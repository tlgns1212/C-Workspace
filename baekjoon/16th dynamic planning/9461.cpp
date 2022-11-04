#include <iostream>
using namespace std;

// else if 말고 else로 했을때 시간초과, long말고 int 했을 때 틀림, 피보나치 수열처럼 증가하게 되면 100까지 가더라도 기하급수적으로 증가하므로, long이나 long long 필요!!!

long triangleMemo[101] = {
    0,
    1,
    1,
};

long triangleLength(int n)
{
    if (n < 3)
    {
        return triangleMemo[n];
    }
    else if (triangleMemo[n] == 0)
    {
        triangleMemo[n] = triangleLength(n - 2) + triangleLength(n - 3);
    }
    return triangleMemo[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        cout << triangleLength(temp) << '\n';
    }
    return 0;
}