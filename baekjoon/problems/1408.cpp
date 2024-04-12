#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string nowTime, startTime, tempSt;
    vector<int> vNow, vStart, vAnswer;
    cin >> nowTime >> startTime;

    istringstream ss1(nowTime);
    while (getline(ss1, tempSt, ':'))
    {
        vNow.push_back(stoi(tempSt));
    }
    istringstream ss2(startTime);
    while (getline(ss2, tempSt, ':'))
    {
        vStart.push_back(stoi(tempSt));
    }
    for (int i = vNow.size() - 1; i >= 0; i--)
    {
        int temp = vStart[i] - vNow[i];
        if (temp < 0)
        {
            if (i == 0)
            {
                temp = 24 + temp;
            }
            else
            {
                vStart[i - 1]--;
                vStart[i] += 60;
                temp = vStart[i] - vNow[i];
            }
        }
        vAnswer.push_back(temp);
    }

    cout.width(2);
    cout.fill('0');
    cout << vAnswer[2] << ':';
    cout.width(2);
    cout.fill('0');
    cout << vAnswer[1] << ':';
    cout.width(2);
    cout.fill('0');
    cout << vAnswer[0];

    return 0;
}