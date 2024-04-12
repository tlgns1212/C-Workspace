#include <iostream>
using namespace std;

int main()
{
    int maxPeople = 0;
    int nowPeople = 0;
    for (int i = 0; i < 10; i++)
    {
        int out, in;
        cin >> out >> in;
        nowPeople -= out;
        nowPeople += in;
        if (nowPeople > maxPeople)
        {
            maxPeople = nowPeople;
        }
    }
    cout << maxPeople;
    return 0;
}