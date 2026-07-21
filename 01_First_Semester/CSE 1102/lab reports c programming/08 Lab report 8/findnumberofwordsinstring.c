// find number of words in string

#include<stdio.h>

int main()
{
    char sentecne[100];
    
    int i, count=1;
    
    printf("Enter a sentence : ");
    gets(sentecne);
    
    
    for(i=0; sentecne[i]; i++)
    {
        if(sentecne[i]==' ')
        {
            count++;
        }
    }
    printf("\nWords in this string %d\n",count);
    
    return 0;
}