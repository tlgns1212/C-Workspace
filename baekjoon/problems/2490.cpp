#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int temp;

    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> temp;
            if (temp == 0)
                count++;
        }
        switch (count)
        {
        case 0:
            cout << "E\n";
            break;
        case 1:
            cout << "A\n";
            break;
        case 2:
            cout << "B\n";
            break;
        case 3:
            cout << "C\n";
            break;
        case 4:
            cout << "D\n";
            break;
        }
    }

    return 0;
}

// 0 1 0 1
// 1 1 1 0
// 0 0 1 1