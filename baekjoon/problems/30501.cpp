#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, count = 0;
    string name, tempS;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> tempS;
        if (tempS.find("S") != string::npos)
        {
            count++;
            if (count == 2)
            {
                break;
            }
            name = tempS;
        }
    }
    if (count == 1)
    {
        cout << name;
    }
}