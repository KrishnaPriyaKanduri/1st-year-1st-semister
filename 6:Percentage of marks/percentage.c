#include<stdio.h>
int main()
{
int percentage;
printf("enter percentage");
scanf("%d", &percentage);
if (percentage>70)
{
printf("distinction");
}
else if (percentage>=60 && percentage<70)
{
printf("first class");
}
else if (percentage>=50 && percentage<60)
{
printf("second class");
}
else
{
printf("fail");
}
return 0;
}
