#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string tempName, tempMove;
    map<string, string> mEntry;
    vector<string> vEntry;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tempName >> tempMove;
        if (mEntry.find(tempName) != mEntry.end())
        {
            mEntry.erase(tempName);
        }
        else
        {
            mEntry[tempName] = tempMove;
        }
    }
    for (auto it = mEntry.begin(); it != mEntry.end(); it++)
    {
        vEntry.push_back(it->first);
    }
    sort(vEntry.begin(), vEntry.end(), greater<string>());
    for (auto i : vEntry)
    {
        cout << i << "\n";
    }
    return 0;
}