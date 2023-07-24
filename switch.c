#include<stdio.h>
#include<conio.h>
int main()
{
char day;
clrscr();
printf("ENTER YOUR CHOICH==>");
scanf("%c",&day);
switch(day)
{
  case 's':
           printf("SUNDAY");
           break;
  case 'm':
           printf("MONDAY");
           break;
  case 'T':
           printf("TUESDAY");
           break;
  case 'w':
           printf("WEDNESDAY");
           break;
  case 't':
           printf("THURSDAY");
           break;
  case 'f': 
          printf("FRIDAY");
          break;
  case 'S':
          printf("SATURDAY");
          break;
  default:
         printf("INVALID DAY");
         break;
}
getch();
}