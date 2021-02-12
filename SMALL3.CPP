#include<stdio.h>
#include <math.h>
#include <conio.h>

void main()
{
  int a,b,c;
  clrscr();
  printf("Enter the three numbers \n");
  scanf("%d %d %d",&a,&b,&c);

  if (a<b&&a<c)
   {
   printf("%d is the smallest of the three \n",a);
   }
   if(b<a&&b<c)
   {
   printf("%d is the smallest of the three \n",b);
   }
   if(c<a&&c<b)
   {
   printf("%d is the smallest of the three \n",c);
   }
   getch ();
 }
