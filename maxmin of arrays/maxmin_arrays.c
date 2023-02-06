#include<stdio.h>
int main() {
int a[5]={1,2,3,4,5};
int max=a[0],min=a[0],sum=0,i;
float avg;
for(i=0;i<5;i++) {
if (a[i]>max)
max=a[i];
}
for(i=0;i<5;i++){
if (a[i]<min)
min=a[i];
}
for(i=0;i<5;i++){
sum=sum+a[i];
}
avg=sum/5;
printf("max is %d\n",max);
printf("min is %d\n",min);
printf("sum is %d\n",sum);
printf("avg is %f",avg);
return 0;
}
