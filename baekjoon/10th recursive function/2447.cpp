#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<char>> A2;
    vector<char> A;
    int N, squared, k = 1, times = 1, jump = 1, Nsmall, Nbig, Ntemp = 9;
    cin >> N;
    while (1)
    {
        squared = pow(3, k);
        if (squared == N)
        {
            break;
        }
        k++;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if ((i % 3 == 1) && (j % 3 == 1))
            {
                A.push_back(' ');
            }
            else
            {
                A.push_back('*');
            }
        }
        A2.push_back(A);
        A.clear();
    }
    while (times <= (k - 1))
    {
        Nsmall = (Ntemp / 2) - jump;
        Nbig = (Ntemp / 2) + jump;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if ((((i % Ntemp) >= Nsmall) && ((i % Ntemp) <= Nbig)) && (((j % Ntemp) >= Nsmall) && ((j % Ntemp) <= Nbig)))
                {
                    A2[i][j] = ' ';
                }
            }
        }
        jump += pow(3, times);
        times++;
        Ntemp *= 3;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << A2[i][j];
        }
        cout << '\n';
    }
}
