#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, count = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        char alpha[101], before;
        int eng[26] = {
            0,
        };
        bool isGroup = true;
        cin >> alpha;
        before = alpha[0];
        for (int j = 0; alpha[j] != '\0'; j++)
        {
            if ((before != alpha[j]) && (eng[(int)alpha[j] - 97] != 0))
            {
                isGroup = false;
                break;
            }
            before = alpha[j];
            eng[(int)alpha[j] - 97]++;
        }
        if (isGroup == true)
        {
            count++;
        }
    }
    cout << count;
}