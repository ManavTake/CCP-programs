#include <stdio.h>
#include<conio.h>
#include<math.h>

int main(void)
{
 char Name[30];
 int units;
 
 const int MinCharge=100;
 const double unit1=0.8;
 const double unit2=0.9;
 const double unit3=1.0;
 const double Surcharge=0.15;
 double BillAmount=0.0;
 
 printf("\n\n\n Enter the name of customer :  ");
 scanf("%s",&Name);
 printf("\n Enter the number of units consumed:  ");
 scanf("%d",&units);
 
 BillAmount+= MinCharge;

 
 if (units<=200)
 {
     BillAmount+=units*unit1;
 }
 else if(units>200 && units<=300)
 {
     BillAmount+=(200*unit1)+ ((units-200)*unit2);
 }
 else
 {
     BillAmount+=(200*unit1)+ (100*unit2)+((units-300)*unit3);
 }
 
 if (BillAmount>400)
 {
     BillAmount+= BillAmount*Surcharge;
 }
 
 
 
 printf("\n\n         Electricity Bill\n==================================" );
 printf("\n customer name\t :%s", Name);
 printf("\n units consumed\t :%d",units);
 printf("\n BillAmount\t :%0.2f Rupees\n\n", BillAmount);
 return 0;
 
}

