#include<stdio.h>
int main()
{
int a,b,c,maximum,minimum;
printf("enter a");
scanf("%d", &a);
printf("enter b");
scanf("%d", &b);
printf("enter c");
scanf("%d" ,&c);
if (a>b && a>c)
{
printf("a is maximum\n");
}
else if (b>a && b>c)
{
printf("b is maximum\n");
}
else
{
printf("c is maximum\n");
}
if (a<b && a<c)
{
printf("a is minimum");
}
else if (b<a && b<c)
{
printf("b is minimum");
}
else
{
printf("c is minimum");
}
return 0;
}
