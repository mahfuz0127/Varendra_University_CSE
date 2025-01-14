#include <stdio.h>
int main()
{
    int s, t;

    printf("Enter value of s & t: ");
    scanf("%d%d",&s,&t);

    printf("\nBefore swapping: s = %d, t = %d\n", s, t);

    s = s + t;
    t = s - t;
    s = s - t;

    printf("\nAfter swapping: s = %d, t = %d\n", s, t);

    return 0;
}
