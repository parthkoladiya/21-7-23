#include<stdio.h>
#include<conio.h>
int main()
{
int age;
clrscr();
printf("ENTER YOUR AGE==>");
scanf("%d",&age);
(age>=18)?printf("YOU ARE ELIGIBLE FOR VOTE"):printf("YOU ARE NOT ELIGIBLE FOR VOTE");
getch();
}