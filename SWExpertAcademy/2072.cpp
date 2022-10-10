#include <iostream>

using namespace std;

int main()
{
    int T, answer, temp;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        answer = 0;
        for (int j = 0; j < 10; j++)
        {
            cin >> temp;
            if (temp % 2 == 1)
            {
                answer += temp;
            }
        }
        cout << "#" << i + 1 << " " << answer << endl;
    }
    return 0;
}