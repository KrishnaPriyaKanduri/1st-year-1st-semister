#include<stdio.h>
void bubblesort(int[],int);
int main() {
int a[6]={988,65,121,36,84,9};
bubblesort(a,6);
return 0;
}
void bubblesort(int a[],int size){
int i,j,temp;
for(i=0;i<size;i++){
for(j=0;j<size-i-1;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
} }
printf("after sorting");
for(i=0;i<size;i++){
printf("%5d",a[i]);
}
return;
}
