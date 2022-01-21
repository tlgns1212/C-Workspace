#include <iostream>
using namespace std;
int BoxVolume(int a, int b, int c)
{
    return a * b * c;
}
int BoxVolume(int a, int b)
{
    return a * b;
}
int BoxVolume(int a)
{
    return a;
}

int main()
{
    cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
    cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
    cout << "[7, D, D] : " << BoxVolume(7) << endl;
    return 0;
}