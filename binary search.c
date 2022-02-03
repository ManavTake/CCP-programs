/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
void main()
{
    int n,i,a[10],key,low,high,mid,flag=0;
    printf("\n Enter the no. of elements:");
    scanf("%d",&n);
    printf("\n Enter %d elements in ascending order:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nEnter the key element:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            flag=1;
            break;
        }
        if(key>a[mid])
        low=mid+1;
        else
        high=mid-1;
    }
    if(flag==1)
    printf("\n Successful search %d at position %d",key,mid+1);
    else
    printf("\n Unsuccessful  search");
    getch();
  
}
