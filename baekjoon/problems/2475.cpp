#include <iostream>
using namespace std;

int main()
{
    int answer = 0, temp;
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        answer += (temp * temp);
    }
    return 0;
}
