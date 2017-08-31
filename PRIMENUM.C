#include<stdio.h>
#include<conio.h>
int main()
{
int num,i;
int count=0;
clrscr();
printf("\nEnter the number");
scanf("\n%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
{
count=1;
}
}
if(count==1)
{
printf("\n%d is not prime number",num);
}
else
{
printf("\n%d is primenumber",num);
}
getch();
return 0;
}
