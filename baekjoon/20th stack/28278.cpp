#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    int inputA, inputB;
    stack<int> sA;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> inputA;

        switch (inputA)
        {
        case 1:
            cin >> inputB;
            sA.push(inputB);
            break;
        case 2:
            if (!sA.empty())
            {
                cout << sA.top() << '\n';
                sA.pop();
            }
            else
            {
                cout << -1 << '\n';
            }
            break;
        case 3:
            cout << sA.size() << '\n';
            break;
        case 4:
            cout << (sA.empty() ? 1 : 0) << '\n';
            break;
        case 5:
            if (!sA.empty())
            {
                cout << sA.top() << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
            break;
        }
    }

    return 0;
}