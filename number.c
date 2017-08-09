#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("\nEnter the number");
scanf("%d",&num);
if(num==0)
{
printf("\Zero");
}
else if(num<0)
{
printf("\nNegative");
}
else
{
printf("\nPositive");
}
getch();
return 0;
}