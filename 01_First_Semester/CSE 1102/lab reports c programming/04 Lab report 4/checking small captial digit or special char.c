/*#include<stdio.h>
int main()
{
   char ch;
   printf("Enter a character : ");
   scanf(" %c",&ch);

   if(ch>='0' && ch<='9')
   {
    printf("\n%c is a digit\n",ch);
   }
   else if(ch>='A' && ch<='Z')
   {
    printf("\n%c is a Capital Letter\n",ch);
   }
   else if(ch>='a' && ch<='z')
   {
    printf("\n%c is a Small Letter\n",ch);
   }
   else
   {
    printf("\n%c is a Special Character\n",ch);
   }

}
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char input[100];
    printf("Enter a character: ");
    scanf("%s", input);

    // Check if the length of input is more than 1
    if(strlen(input) > 1)
    {
        printf("\nInvalid input. Please enter a single character.\n");
    }
    else
    {
        char ch = input[0]; // Get the first character

        if(ch >= '0' && ch <= '9')
        {
            printf("\n%c is a digit\n", ch);
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            printf("\n%c is a Capital Letter\n", ch);
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            printf("\n%c is a Small Letter\n", ch);
        }
        else
        {
            printf("\n%c is a Special Character\n", ch);
        }
    }

    return 0;
}
