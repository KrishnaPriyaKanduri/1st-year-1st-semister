#include<stdio.h>
int main()
{
int p,t,r,simpleinterest;
printf("enter p");
scanf("%d", &p);
printf("enter t");
scanf("%d" , &t);
printf("enter r");
scanf("%d" , &r);
simpleinterest= p*t*r/100;
printf("simple interest is %d" ,simpleinterest);
return 0;
}
