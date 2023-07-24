#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e;
clrscr();
printf("ENTER YOUR 5 VALEU");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
(a>b)?(a>c)?(a>d)?(a>e):printf("A IS BIG"):printf("E IS BIG"):(b>c)?(b>d)?(b>e)?printf("B IS BIG"):printf("E IS BIG"):(c>d)?(c>e)?printf("C IS BIG"):printf("E IS BIG"):(d>e)?printf("D IS BIG"):printf("E IS BIG"):
getch();
}