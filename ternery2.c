#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d;
clrscr();
printf("ENTER YOUR VALEU==>");
scanf("%d%d%d",&a,&b,&c);
(a>b)?(a>c):(a>d)?printf("A IS BIG"):printf("D IS BIG");(b>c)?(b>d)?printf("B IS BIG"):printf("D IS BIG"):(c>d)?printf("C IS BIG"): printf("D IS BIG");
getch();
}