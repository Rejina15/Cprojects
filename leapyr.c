#include<stdio.h>
#include<conio.h>
int main()
{
int yr;
clrscr();
printf("Enter the year:");
scanf("%d",&yr);
if(yr%4==0)
{
printf("\n%d is a leap year",yr);
}
else
{
printf("\n%d is not a leap year",yr);
}
getch();
return 0;
}