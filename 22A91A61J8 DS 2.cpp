#include<stdio.h>
void qs(int a[],int,int);
int dividelist(int a[],int,int);
main()
{
int a[20],n,i,first,last;
printf("enter range:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
first=0;
last=n-1;
qs(a,first,last);
printf("Array after sorting: ");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
void qs(int a[],int first,int last)
{
 int x;
 if(first<last)
 {
 x=dividelist(a,first,last);
 qs(a,first,x-1);
 qs(a,x+1,last);
 }
}
int dividelist(int a[],int first,int last)
{
 int p,i,j,t;
 i=first+1;
 j=last;
 p=a[first];
 while(1)
 {
 while(a[i]<p)
 i++;
 while(a[j]>p)
 j--;
 if(i<j)
 {
 t=a[i];
 a[i]=a[j];
 a[j]=t;
 }
 else
 break;
 }
 t=a[first];
 a[first]=a[j];
 a[j]=t;
 return j;
}
