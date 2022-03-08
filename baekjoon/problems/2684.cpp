#include <iostream>
#include <string>
using namespace std;

int main()
{
    int P;
    string throws;

    cin >> P;
    for (int i = 0; i < P; i++)
    {
        int bbb = 0, bbu = 0, bub = 0, buu = 0, ubb = 0, ubu = 0, uub = 0, uuu = 0;
        cin >> throws;
        for (int j = 2; j < throws.length(); j++)
        {
            if (throws[j - 2] == 'H')
            {
                if (throws[j - 1] == 'H')
                {
                    if (throws[j] == 'H')
                    {
                        uuu++;
                    }
                    else
                    {
                        uub++;
                    }
                }
                else
                {
                    if (throws[j] == 'H')
                    {
                        ubu++;
                    }
                    else
                    {
                        ubb++;
                    }
                }
            }
            else
            {
                if (throws[j - 1] == 'H')
                {
                    if (throws[j] == 'H')
                    {
                        buu++;
                    }
                    else
                    {
                        bub++;
                    }
                }
                else
                {
                    if (throws[j] == 'H')
                    {
                        bbu++;
                    }
                    else
                    {
                        bbb++;
                    }
                }
            }
        }
        cout << bbb << ' ' << bbu << ' ' << bub << ' ' << buu << ' ' << ubb << ' ' << ubu << ' ' << uub << ' ' << uuu << '\n';
    }
}