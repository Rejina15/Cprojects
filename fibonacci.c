#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c;
int a=-1,b=1;
clrscr();
printf("\nenter the no of values");
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf(" %d ",c);
}
getch();
}