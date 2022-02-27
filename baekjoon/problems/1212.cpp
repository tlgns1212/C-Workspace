#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string binary[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    string result = "";
    string e;

    cin >> e;
    for (int i = 0; i < e.size(); i++)
    {
        result += binary[e.at(i) - '0'];
    }
    reverse(result.begin(), result.end());

    while (result.back() == '0' && result.size() > 1)
    {
        result.pop_back();
    }
    reverse(result.begin(), result.end());
    cout << result;
}