#include<stdio.h>
#include<conio.h>

int factorial(int N);
void main()
{
    int FACT, NUM;
    printf("\n Enter the number:  ");
    scanf("%d",&NUM);
    
    if (NUM>0)
    {
        FACT=factorial(NUM);
        printf("\n Factorial of %d =  %d  ", NUM,FACT);
    }
    else
    printf("\n ERROR: Given number is %d negative",NUM);
    
    getch();
}

int factorial(int N)
  {
    int RESULT;
    if(N==1)
    return(1);
    else
    RESULT=N*factorial(N-1);
    return(RESULT);
  }