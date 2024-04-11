#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int E, S, M, e = 1, s = 1, m = 1, answer = 1;
    cin >> E >> S >> M;

    while (1)
    {
        if (e == E && s == S && m == M)
        {
            break;
        }
        answer++;
        e++;
        s++;
        m++;
        if (e > 15)
            e = 1;
        if (s > 28)
            s = 1;
        if (m > 19)
            m = 1;
    }
    cout << answer;

    return 0;
}
