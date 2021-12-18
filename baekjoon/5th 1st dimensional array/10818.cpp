// #include <iostream>
// int main()
// {
//     int A, N, min = 1000001, max = -1000001;
//     scanf("%d", &N);
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &A);
//         if (min > A)
//             min = A;
//         if (max < A)
//             max = A;
//     }
//     printf("%d %d", min, max);
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp, min = 1000000, max = -1000000;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        if (temp < min)
            min = temp;
        if (max < temp)
            max = temp;
    }
    cout << min << ' ' << max;
}