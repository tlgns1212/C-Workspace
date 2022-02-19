#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, tmp;
    int count[10001] = {
        0,
    };
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> tmp;
        count[tmp]++;
    }

    for (int i = 0; i < 10001; i++)
        for (int j = 0; j < count[i]; j++)
            cout << i << '\n';
}