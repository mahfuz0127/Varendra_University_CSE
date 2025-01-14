#include<stdio.h>
int main()
{
   int num1,num2;
   char c;

   printf("Enter Two Number : ");
   scanf("%d %d",&num1,&num2);

   printf("\nEnter an arithmetic operator (+, -, *, /) : ");
   scanf(" %c",&c);

   if(c=='+')
   {
       printf("\n%d + %d = %d",num1,num2,num1+num2);
   }
   else if(c=='-')
   {
      printf("\n%d - %d = %d",num1,num2,num1-num2);
   }
   else if(c=='*')
   {
      printf("\n%d * %d = %d\n",num1,num2,num1*num2);
   }
   else if(c=='/')
   {
      if(num2!=0){
        printf("\n%d / %d = %d\n",num1,num2,num1/num2);
      }
      else
      {
        printf("\nError : Division by Zero");
      }

   }
   else
   {
     printf("Error: Invalid operator\n");
   }

return 0;
}


