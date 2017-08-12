#include<stdio.h>
#inclide<conio.h>
int main()
{
int num;
printf("  \nEnter the number");
scanf("  %d",&num);
if(num%2==0)
{
printf("/nEven"  );
}
else
{
printf("   \nOdd"  );
}
getch();
return 0;
}