#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> odds;

    for (int i = 0; i < 7; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2 == 1)
        {
            odds.push_back(temp);
        }
    }
    if (odds.empty())
    {
        cout << "-1";
    }
    else
    {
        int sum = 0;
        int smallest = 987654321;
        for (int odd : odds)
        {
            sum += odd;
            if (odd < smallest)
                smallest = odd;
        }
        cout << sum << '\n'
             << smallest;
    }

    return 0;
}

// 12
// 77
// 38
// 41
// 53
// 92
// 85

// 256
// 41