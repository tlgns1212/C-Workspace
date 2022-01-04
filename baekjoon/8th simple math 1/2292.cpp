#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, count = 1, i = 0;
    cin >> N;
    while (1)
    {
        count += (6 * i);
        if (count >= N)
            break;
        i++;
    }
    cout << i + 1;
}