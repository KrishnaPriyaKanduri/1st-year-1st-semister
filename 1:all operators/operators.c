#include<stdio.h>
int main()
{
int a,b,sum,difference,multiplication,division,mod,greaterthan,lessthan,equal,notequal,logicalor,logicaland,bitwiseor,bitwiseand;
printf("enter a and b ");
scanf("%d %d",&a,&b);
sum=a+b;
difference=a-b;
multiplication=a*b;
division=a/b;
mod=a%b;
greaterthan=a>b;
lessthan=a<b;
equal=(a==b);
notequal=(a!=b);
logicalor=(a==b||a>b);
logicaland=(a>b&&a<b);
bitwiseor=(a<b|b>a);
bitwiseand=(a=b&b<a);
printf("sum=%d\n difference=%d\n multiplication=%d\n division=%d\n mod=%d\ngreaterthan=%d\n lessthan=%d\n equal=%d\n notequal=%d\n logicalor=%d\n logicaland=%d\n bitwiseor=%d\nbitwiseand=%d\n",sum,difference,multiplication,division,mod,greaterthan,lessthan,equal,notequal,logicalor,logicaland,bitwiseor,bitwiseand);
return 0;
}

