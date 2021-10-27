#include<stdio.h>
void main()
{
int a;
scanf("%d",&a);
if(a<10)
{
printf("motor on");
}
else if(10<a&&a<90)
{
printf("motor is running");
}
else if(a>90)
{
printf("motor off");
}
getch();
clrscr();
}