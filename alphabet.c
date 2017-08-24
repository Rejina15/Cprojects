#include<stdio.h>
#include<conio.h>
int main()
{
char a;
clrscr();
printf("Enter the alphabet");
scanf("\n%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
{
printf("\n%c is a vowel",a);
}
else
 {
printf("\n%c is a consonont",a);
}
getch();
return 0;
}