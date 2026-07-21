#include<stdio.h>
int main()
{
    int i,num;

    printf("Enter a number : ");
    scanf("%d",&num);

    for(i=1; i<=10; i++)
    {
        printf("%2d * %2d = %d\n",num,i,num*i);
    }
}
