#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp = 1; // temp = 1 안하면 91같이 이상한 숫자 나옴
    queue<int> qN;

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        qN.push(i);
    }
    while (!qN.empty())
    {
        qN.pop();
        if (!qN.empty())
        {
            temp = qN.front();
            qN.pop();
            qN.push(temp);
        }
    }
    cout << temp;

    return 0;
}
