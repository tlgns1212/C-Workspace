#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int coins[] = {500, 100, 50, 10, 5, 1};
    int N, answer = 0;
    cin >> N;
    N = 1000 - N;
    for (int coin : coins)
    {
        answer += (N / coin);
        N %= coin;
    }
    cout << answer;

    return 0;
}