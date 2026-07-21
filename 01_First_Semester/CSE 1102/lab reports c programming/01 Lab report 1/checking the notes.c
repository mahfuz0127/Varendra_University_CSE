#include <stdio.h>

int main() {

  int note1000, note500, note200, note100, note50, note20, note10, note5, note2, note1;
  int money_amnt;
  printf("Input the Amount of money: ");
  scanf("%d", &money_amnt);

  note1000 = money_amnt / 1000;
  money_amnt = money_amnt % 1000;

  note500 = money_amnt / 500;
  money_amnt = money_amnt % 500;

  note200 = money_amnt / 200;
  money_amnt = money_amnt % 200;

  note100 = money_amnt / 100;
  money_amnt = money_amnt % 100;

  note50 = money_amnt / 50;
  money_amnt = money_amnt % 50;

  note20 = money_amnt / 20;
  money_amnt = money_amnt % 20;

  note10 = money_amnt / 10;
  money_amnt = money_amnt % 10;

  note5 = money_amnt / 5;
  money_amnt = money_amnt % 5;

  note2 = money_amnt / 2;
  money_amnt = money_amnt % 2;

  note1 = money_amnt / 1;

  printf("\nTotal notes needed= \n\n");
  printf("1000 note \t=  %3d\n", note1000);
  printf(" 500 note \t=  %3d\n", note500);
  printf(" 200 note \t=  %3d\n", note200);
  printf(" 100 note \t=  %3d\n", note100);
  printf("  50 note \t=  %3d\n", note50);
  printf("  20 note \t=  %3d\n", note20);
  printf("  10 note \t=  %3d\n", note10);
  printf("   5 note \t=  %3d\n", note5);
  printf("   2 note \t=  %3d\n", note2);
  printf("   1 note \t=  %3d\n", note1);

  return 0;
}
