#include<stdio.h>

int main()
{
    int Initial,Final;
    printf("Enter Initial Point: ");
    scanf("%d",&Initial);
    printf("\nEnter Final Point: ");
    scanf("%d",&Final);
    printf("\nPythagorean Triplets : \n");

    int i,j,k;

    for(i=Initial; i<=Final; i++)
    {
        for(j=i; j<=Final; j++)
        {
            for(k=j; k<=Final; k++)
            {
                if((i*i+j*j)==k*k)
                {
                    printf("%d %d %d\n",i,j,k);
                }
            }
        }
    }

    return 0;
}
