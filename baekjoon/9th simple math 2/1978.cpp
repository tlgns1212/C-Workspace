#include <iostream>
using namespace std;

// bool isPrimeNum(int n)
// {
//     if (n <= 1)
//     {
//         return false;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (i * j == n)
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int N, count = 0;
//     cin >> N;
//     while (N--)
//     {
//         int n;
//         cin >> n;
//         if (isPrimeNum(n))
//         {
//             count++;
//         }
//     }
//     cout << count;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, count = 0, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num == 1)
            count++;
        else
            for (int j = 2; j < num; j++)
            {
                if (num % j == 0)
                {
                    count++;
                    break;
                }
            }
    }
    cout << n - count;
}