#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N > 0)
    {
        cout << "long ";
        N -= 4;
    }
    cout << "int";
    return 0;
}