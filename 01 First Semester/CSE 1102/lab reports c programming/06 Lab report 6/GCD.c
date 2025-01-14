#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);

    for(i=x<y?x:y; i>0; i--)
    {
        if(x%i==0 && y%i==0)
        {
            printf("\nGCD is %d\n",i);
            break;
        }
    }

    return 0;
}
