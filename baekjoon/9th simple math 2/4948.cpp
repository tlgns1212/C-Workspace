#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M = 500000;
    bool arr[1000001];
    for (int i = 2; i < 1000001; i++)
    {
        arr[i] = true;
    }
    arr[0] = arr[1] == false;

    for (int i = 2; (i * i) <= (2 * M); i++)
    {
        if (arr[i])
        {
            for (int j = i * i; j <= (2 * M); j += i)
            {
                arr[j] = false;
            }
        }
    }

    while (1)
    {
        cin >> M;
        if (M == 0)
        {
            break;
        }
        int count = 0;
        for (int i = M + 1; i <= (2 * M); i++)
        {
            if (arr[i])
            {
                count++;
            }
        }
        cout << count << '\n';
    }
}