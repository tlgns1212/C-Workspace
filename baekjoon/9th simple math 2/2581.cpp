#include <iostream>
using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int sum = 0, M, N, minNum;
//     cin >> M >> N;
//     for (int i = M; i <= N; i++)
//     {
//         if (i == 2)
//         {
//             if (sum == 0)
//             {
//                 minNum = i;
//             }
//             sum += i;
//         }
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 break;
//             }
//             else if (j == (i - 1))
//             {
//                 if (sum == 0)
//                 {
//                     minNum = i;
//                 }
//                 sum += i;
//             }
//         }
//     }
//     if (sum != 0)
//     {
//         cout << sum << '\n'
//              << minNum;
//     }
//     else
//     {
//         cout << -1;
//     }
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0, M, N, minNum;
    cin >> M >> N;
    if (M == 1)
    {
        M = 2;
    }
    for (int i = M; i <= N; i++)
    {
        int temp = 0;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                temp = 1;
            }
        }
        if (temp == 0)
        {
            if (sum == 0)
            {
                minNum = i;
            }
            sum += i;
        }
    }
    if (sum != 0)
    {
        cout << sum << '\n'
             << minNum;
    }
    else
    {
        cout << -1;
    }
}