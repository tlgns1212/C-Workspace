#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int start, answer, N, F;
    cin >> N >> F;
    start = (N / 100) * 100;
    for (int i = start; i < (start + 100); i++)
    {
        if (i % F == 0)
        {
            answer = i % 100;
            break;
        }
    }
    if (answer >= 0 && answer < 10)
    {
        cout << "0";
    }
    cout << answer << '\n';
}
