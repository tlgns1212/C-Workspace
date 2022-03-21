#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A[5], i = 2, least = 0, answer;
    for (int j = 0; j < 5; j++)
    {
        cin >> A[j];
    }
    while (1)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i % A[j] == 0)
            {
                least++;
            }
        }
        if (least >= 3)
        {
            answer = i;
            break;
        }
        i++;
        least = 0;
    }
    cout << answer;
}