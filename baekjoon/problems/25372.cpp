// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int N;
//     string s;

//     cin >> N;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> s;
//         if (s.size() >= 6 && s.size() <= 9)
//         {
//             cout << "yes" << '\n';
//         }
//         else
//         {
//             cout << "no" << '\n';
//         }
//     }
//     return 0;
// }

#include <iostream>

#define MAX_SIZE 10
using namespace std;
int isWhat[MAX_SIZE];
int point = -1;
int isEmpty()
{
    if (point == -1)
        return 1;
    return 0;
}
int isFull()
{
    if (point == 10)
        return 1;
    return 0;
}
void into(int num)
{
    if (point >= 10)
        printf("Full");
    isWhat[++point] = num;
}
int take()
{
    if (isEmpty() == 1)
        printf("Empty");
    return isWhat[point--];
}
int main(int argc, char const *argv[])
{
    int e;
    into(5);
    into(2);
    while (!isEmpty())
    {
        printf("%d", take());
        into(4);
        into(1);
        printf("%d", take());
        into(3);
        printf("%d", take());
        printf("%d", take());
        into(6);
        printf("%d", take());
        printf("%d", take());
    }
}