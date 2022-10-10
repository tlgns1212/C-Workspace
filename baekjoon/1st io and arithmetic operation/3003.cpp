#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> original = {1, 1, 2, 2, 2, 8};
    int temp;
    for (int i = 0; i < 6; i++)
    {
        cin >> temp;
        cout << original[i] - temp << ' ';
    }
    return 0;
}