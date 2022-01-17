#include <iostream>
using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int M, N;
//     cin >> M >> N;
//     if (M == 1)
//     {
//         M = 2;
//     }
//     for (int i = M; i <= N; i++)
//     {
//         int temp = 0;
//         for (int j = 2; j * j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 temp = 1;
//             }
//         }
//         if (temp == 0)
//         {
//             cout << i << '\n';
//         }
//     }
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;
    bool arr[1000001];
    cin >> M >> N;
    for (int i = 2; i < 1000001; i++)
    {
        arr[i] = true;
    }
    arr[0] = arr[1] == false;

    for (int i = 2; (i * i) <= N; i++)
    {
        if (arr[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                arr[j] = false;
            }
        }
    }
    for (int i = M; i <= N; i++)
    {
        if (arr[i])
        {
            cout << i << '\n';
        }
    }
}