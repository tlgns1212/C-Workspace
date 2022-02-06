#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num[10001] = {
        0,
    };
    num[0] = -1;
    num[1] = -1;
    for (int k = 2; k <= 10000; k++)
    {
        for (int i = 2; i * k <= 10000; i++)
        {
            num[k * i] = -1;
        }
    }
    int count;
    cin >> count;
    while (count--)
    {
        int a, b, n;
        cin >> n;
        a = n / 2;
        b = n / 2;
        while (1)
        {
            if (num[a] == 0 && num[b] == 0)
            {
                cout << a << ' ' << b << '\n';
                break;
            }
            else
            {
                a--;
                b++;
            }
        }
    }
}