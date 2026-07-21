#include<stdio.h>
int main() {
  // Bill Without Penalty

  const MC=30, SC=10, MIN=20;
  int bUnit;
  float billWithUnit, allBill,totalBill;
  printf("Enter total unit : ");
  scanf("%d",&bUnit);

  if(bUnit<=75){
    billWithUnit = (bUnit*4.94);
  } else if(bUnit > 75 && bUnit <= 200) {
    billWithUnit = (bUnit*7.38);
  } else if(bUnit>200 && bUnit <= 300){
    billWithUnit = (bUnit*10.56);
  } else{
    billWithUnit = (bUnit*12.18);
  }

  totalBill = billWithUnit + MC + SC;
  allBill = totalBill + (totalBill*.05);
  printf("\nNet Bill = %.2f\n",allBill);

  // Bill with penalty

  float penBill, penCharge;
  penCharge = (MIN>(allBill*0.015)) ? MIN : (allBill*0.015);
  penBill = allBill + penCharge;
  printf("\nBill With Penalty = %.2f\n\n",penBill);

  return 0;
}
