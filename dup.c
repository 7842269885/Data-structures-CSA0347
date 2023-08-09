#include<stdio.h>
#include<conio.h>
int main()
{
 int a[40],i,j,k,count=0,dup[40],num;
printf("enter size of an array:");
scanf("%d",&num);
printf("enter the elements of an array");
for (i=0;i<num;i++)
{
scanf("%d",&a[i]);
dup[i]=-1;
}
printf("enter the elements are:");
for (i=0;i<num;i++)
{ 
for (j=0;j<num;j++)
{
if (a[i]==a[j]);
{
for (k=j;k<num;k++)
{
a[k]=a[k+1];
}
j--;
num--;
}
}
}
printf("\n after deleting the duplication element in array:");
for (i=0;i<num;i++);
{
printf("%d",a[i]);
}
getch ();
return 0;
}
