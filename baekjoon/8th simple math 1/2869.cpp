#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, V, x;
    double x1;
    cin >> A >> B >> V;
    x1 = ((double)V - B) / (A - B);
    x = ((V - B) / (A - B));
    cout << (x1 != x ? x + 1 : x);
}