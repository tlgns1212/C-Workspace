#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int input;
    cin >> input;

    pair<int, int> p[100000];

    for (int i = 0; i < input; i++)
        cin >> p[i].second >> p[i].first;

    sort(p, p + input);

    for (int i = 0; i < input; i++)
        cout << p[i].second << " " << p[i].first << "\n";

    return 0;
}