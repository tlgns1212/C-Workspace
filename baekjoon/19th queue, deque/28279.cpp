#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, inputA, inputB;
    deque<int> dA;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> inputA;

        switch (inputA)
        {
        case 1:
            cin >> inputB;
            dA.push_front(inputB);
            break;
        case 2:
            cin >> inputB;
            dA.push_back(inputB);
            break;
        case 3:
            if (!dA.empty())
            {
                cout << dA.front() << '\n';
                dA.pop_front();
            }
            else
            {
                cout << -1 << '\n';
            }
            break;
        case 4:
            if (!dA.empty())
            {
                cout << dA.back() << '\n';
                dA.pop_back();
            }
            else
            {
                cout << -1 << '\n';
            }
            break;
        case 5:
            cout << dA.size() << '\n';
            break;
        case 6:
            cout << (dA.empty() ? 1 : 0) << '\n';
            break;
        case 7:
            if (!dA.empty())
                cout << dA.front() << '\n';
            else
                cout << -1 << '\n';
            break;
        default:
            if (!dA.empty())
                cout << dA.back() << '\n';
            else
                cout << -1 << '\n';
            break;
        }
    }
}