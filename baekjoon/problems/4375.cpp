#include <iostream>
using namespace std;

int main()
{
    int n, digit;
    while (scanf("%d", &n) != EOF)
    {
        digit = 1;
        int num = 1;
        while (1)
        {
            if (num % n == 0)
                break;
            digit++;
            num = num * 10 + 1;
            num %= n;
        }
        printf("%d\n", digit);
    }

    return 0;
}
