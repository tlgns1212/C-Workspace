#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp, tempgcd;
    vector<int> A, M;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }
    sort(A.begin(), A.end());
    tempgcd = A[1] - A[0];
    for (int i = 2; i < N; i++)
    {
        tempgcd = gcd(tempgcd, A[i] - A[i - 1]);
    }
    for (int i = 2; i * i <= tempgcd; i++)
    {
        if (tempgcd % i == 0)
        {
            M.push_back(i);
            if (i != tempgcd / i)
                M.push_back(tempgcd / i);
        }
    }
    M.push_back(tempgcd);
    sort(M.begin(), M.end());

    for (auto i : M)
    {
        cout << i << ' ';
    }

    return 0;
}

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int N, temp, percent, tempMeas;
//     vector<int> A, M, meas;
//     cin >> N;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> temp;
//         A.push_back(temp);
//     }
//     sort(A.begin(), A.end());
//     for (int i = 2; i <= A[0]; i++)
//     {
//         percent = -1;
//         for (auto a : A)
//         {
//             if (percent == -1)
//                 percent = a % i;
//             if (percent == a % i)
//             {
//                 continue;
//             }
//             else
//             {
//                 percent = -1;
//                 break;
//             }
//         }
//         if (percent != -1)
//         {
//             M.push_back(i);
//             percent = -1;
//         }
//     }
//     tempMeas = A[1] - A[0];
//     for (int i = 1; i * i < tempMeas; i++)
//     {
//         if (tempMeas % i == 0)
//         {
//             meas.push_back(i);
//             meas.push_back(tempMeas / i);
//         }
//     }
//     for (int i = 1; i < meas.size(); i++)
//     {
//         if (meas[i] > A[0])
//         {
//             percent = -1;
//             for (auto a : A)
//             {
//                 if (percent == -1)
//                     percent = a % meas[i];
//                 if (percent == a % meas[i])
//                 {
//                     continue;
//                 }
//                 else
//                 {
//                     percent = -1;
//                     break;
//                 }
//             }
//             if (percent != -1)
//             {
//                 M.push_back(meas[i]);
//                 percent = -1;
//             }
//         }
//     }
//     sort(M.begin(), M.end());
//     for (auto a : M)
//     {
//         cout << a << ' ';
//     }

//     return 0;
// }
