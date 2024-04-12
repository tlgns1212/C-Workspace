#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    int num = 665;
    int count = 0;

    cin >> N;
    while (1)
    {
        string temp = to_string(num);

        if (temp.find("666") != -1)
        {
            count++;
        }
        if (count == N)
        {
            cout << temp;
            break;
        }
        num++;
    }

    return 0;
}