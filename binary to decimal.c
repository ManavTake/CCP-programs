#include<stdio.h>
#include<math.h>
void main()
{
  int binarynum[15];
  int digit_count,decimalnum=0;
  int base=0,i=0;
  printf("enter the number of digits in binary number:\t");
  scanf("%d",&digit_count);
  printf("\n enter the binary digits one after another:\n");
  while(i<digit_count)
  {
    scanf("%d",&binarynum[i]);
    i++;
  }
  digit_count=digit_count-1;
  while(digit_count>=0)
  {
    decimalnum=(binarynum[digit_count]*pow(2,base))+decimalnum;
    base++;
    digit_count--;
  }
  printf("\n decimal equivalent of binary number:\t %d",decimalnum);
  
}

