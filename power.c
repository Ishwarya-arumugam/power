#include<stdio.h>
#include<conio.h>
void main()
{
int i,c=1,e,b;
long int j=1;
clrscr();
scanf("%d",&b);
scanf("%d",&e);
while(c<=e)
{
   j=j*b;
   c++;
}
printf("the power is %ld",j);
getch();
}
