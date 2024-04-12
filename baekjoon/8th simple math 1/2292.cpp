#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int num = 1;
    int index = 1;
    while (1)
    {
        if (num >= N)
        {
            break;
        }
        num += index++ * 6;
    }
    cout << index;

    return 0;
}