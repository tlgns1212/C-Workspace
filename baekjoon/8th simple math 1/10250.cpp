#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int H, W, N;
        cin >> H >> W >> N;
        cout << ((N % H) == 0 ? H : (N % H)) << setfill('0') << setw(2) << ceil((double)N / H) << '\n'
             << setw(1);
    }
}