#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, list[11], biggest = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> list[i];
        if (list[i] > biggest)
        {
            biggest = list[i];
        }
    }
    cout << biggest;
}