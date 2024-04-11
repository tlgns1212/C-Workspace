#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x = -1, y = -1, lArm = 0, rArm = 0, waist = 0, lLeg = 0, rLeg = 0;
    vector<string> a;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string temp;
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < N; i++)
    {
        if (x != -1)
            break;
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] == '*')
            {
                y = i;
                x = j;
                break;
            }
        }
    }

    // arm
    for (int j = 0; j < N; j++)
    {
        if (a[y + 1][j] == '*')
        {
            if (j < x)
                lArm++;
            else if (j > x)
                rArm++;
        }
    }

    // waist
    for (int i = y + 2; i < N; i++)
    {
        if (a[i][x] == '*')
            waist++;
    }

    // lLeg
    for (int i = y + 2 + waist; i < N; i++)
    {
        if (a[i][x - 1] == '*')
            lLeg++;
        if (a[i][x + 1] == '*')
            rLeg++;
    }

    cout << y + 2 << ' ' << x + 1 << '\n';
    cout << lArm << ' ' << rArm << ' ' << waist << ' ' << lLeg << ' ' << rLeg;
    return 0;
}