#include<stdio.h>
int main()
{
  // WAP to find the quotient and remainder of two number without using the modulas(%) code

  int x, y,quotient,reminder;

  printf("Enter two number : ");
  scanf("%d%d",&x,&y);

  quotient = x / y;
  reminder = x - (quotient * y);

  printf("Quotient is %d and Reminder is %d\n", quotient, reminder);
}
