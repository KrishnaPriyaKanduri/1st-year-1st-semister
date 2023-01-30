#include<stdio.h>
#include<math.h>
int main()
{
int p,t,r,compoundinterest;
printf("enter p");
scanf("%d" , &p);
printf("enter t");
scanf("%d" , &t);
printf("enter r");
scanf("%d" , &r);
compoundinterest=p*pow((1+r/100),t);
printf("compound interest is %d", compoundinterest);
return 0;
}

