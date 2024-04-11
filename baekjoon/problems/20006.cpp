#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int p, m, l;
string n;
vector<vector<pair<int, string>>> rooms;

bool compare(pair<int, string> &a, pair<int, string> &b)
{
    return a.second < b.second;
}

void solution()
{
    for (vector<pair<int, string>> room : rooms)
    {
        sort(room.begin(), room.end(), compare);
        if (room.size() == m)
        {
            cout << "Started!\n";
        }
        else
        {
            cout << "Waiting!\n";
        }
        for (pair<int, string> r : room)
        {
            cout << r.first << " " << r.second << '\n';
        }
    }
}

void input()
{
    cin >> p >> m;
    for (int i = 0; i < p; i++)
    {
        cin >> l >> n;
        bool isUsed = false;
        for (int i = 0; i < rooms.size(); i++)
        {
            if (rooms[i].size() == m)
                continue;
            if (rooms[i][0].first - 10 <= l && rooms[i][0].first + 10 >= l)
            {
                isUsed = true;
                rooms[i].push_back(make_pair(l, n));
                break;
            }
        }
        if (!isUsed)
        {
            vector<pair<int, string>> tempRoom;
            tempRoom.push_back(make_pair(l, n));
            rooms.push_back(tempRoom);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();

    return 0;
}
