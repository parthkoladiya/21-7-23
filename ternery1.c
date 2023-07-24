#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("ENTER YOUR VALEU==>");
scanf("%d%d%d",&a,&b,&c);
(a>b)?(a>c)? printf("A IS BIG"):printf("C US BIG"):(b>c)? printf("B IS BIG"):printf("C IS BIG");
getch();
}