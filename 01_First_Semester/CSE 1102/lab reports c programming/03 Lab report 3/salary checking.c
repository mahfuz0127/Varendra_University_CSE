#include<stdio.h>
int main()
{
    int s_grade,basic;
    printf("Enter a grade (6-9) : ");
    scanf("%d",&s_grade);

    switch(s_grade){
    case 6:
        basic = 35500;
        break;
    case 7:
        basic = 31800;
        break;
    case 8:
        basic = 27400;
        break;
    case 9:
        basic = 22000;
        break;
    default:
        printf("\nWrong Input");
        return 1;
    }

     float h_rent,medical,conveyance,others,grossSalary,provi_fund,netSalary;

     h_rent = (10000 > basic*0.45)? 10000 : (basic*0.45);
     medical = (1800 > basic*0.1)? 1800 : (basic*0.1);
     conveyance = (2000 > basic*0.1)? 2000 : (basic*0.1);
     others = (2500 > basic*0.2)? 2500 : (basic*0.2);

     grossSalary = basic + h_rent + medical + conveyance + others;

     printf("\nGross Salary for grade %d is : %.2f\n",s_grade,grossSalary);

     provi_fund = basic * 0.08;
     netSalary = grossSalary - provi_fund;

     printf("\nNet Salary for grade %d is  : %.2f\n",s_grade,netSalary);

return 0;
}
