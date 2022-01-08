#include <iostream>
using namespace std;

int staircase(int height, int room)
{
    if (height == 0)
    {
        return room;
    }
    else if (room == 1)
    {
        return 1;
    }
    else
    {
        return staircase(height - 1, room) + staircase(height, room - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int k, n;
        cin >> k >> n;
        cout << staircase(k, n) << '\n';
    }
}