#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<string, int>> countBooks;
    int N;
    map<string, int> books;
    string temp;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        books[temp]++;
    }
    for (auto i : books)
    {
        countBooks.push_back(pair<string, int>(i.first, i.second));
    }
    sort(countBooks.begin(), countBooks.end(), cmp);

    cout << countBooks[0].first;

    return 0;
}