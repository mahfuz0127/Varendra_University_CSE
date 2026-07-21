#include <stdio.h>
int main()
{
    // WAP to swap two integer number using third variable

    int s, t, t_variable;

    printf("Enter value of s & t: ");
    scanf("%d%d",&s,&t);

    printf("\nBefore swapping: s = %d, t = %d\n", s, t);

    // Swapping with a third variable
    t_variable = s;
    s = t;
    t = t_variable;

    printf("\nAfter swapping: s = %d, t = %d\n", s, t);

    return 0;
}
