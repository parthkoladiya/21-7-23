#include<stdio.h>
#include<conio.h>
void main()
{
int unit,r,ans;
float GST;
clrscr();
printf("ENTER YOUR UNITS==>");
scanf("%d",&unit);
if(unit>=100&&unit<200)
{
 r=4;
 printf("r=4\n");
}
else if(unit>=200&&unit<500)
{
 r=6;
 printf("r=6\n");
}
else if(unit>=500&&unit<1000)
{
 r=8;
 printf("r=8\n");
}
else if(unit>=1000)
{
 r=10;
 printf("r=10\n");
}
else
 {
 r=2;
 printf("r=2\n");
 }
ans=unit*r;
GST=(ans*18)/100;
printf("ANS=>%d\n",ans);
printf("GST=>%.2f",GST);
getch();
}