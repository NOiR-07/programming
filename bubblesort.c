#include <stdio.h>
int main()
{int a,b,i,j,n[100];
printf("How many numbers are u going to enter \n");
scanf("%d",&a);
printf("Enter %d numbers:\n",a);
for(i=0;i<a;i++)

scanf("%d",&n[i]);

for(i=a-2;i>=0;i--){

for(j=0;j<=1;j++){

if(n[j]>n[j+1]){
b=n[j];
n[j]=n[j+1];
n[j+1]=b;
}}}
printf("Sorted Elements:-\n");
for(i=0;i<a;i++)
printf("%d\n",n[i]);
return 0;
}