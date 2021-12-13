#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    // A >= 90?printf("A"):A>=80?printf("B"):A>=70?printf("C"):A>=60?printf("D"):printf("F");
    printf("%c", A >= 90 ? 'A' : A >= 80 ? 'B'
                             : A >= 70   ? 'C'
                             : A >= 60   ? 'D'
                                         : 'F');
}