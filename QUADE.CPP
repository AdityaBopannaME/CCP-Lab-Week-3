#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
 float x,y,z,det,root1,root2,real,img;
 clrscr ();
 printf("\n Enter the value of coefficient x,y and z: \n:");
 scanf("%f %f %f", &x, &y, &z);
 det=y*y-4*x*z;
   if(det>0)
   {
   root1=(-y+sqrt(det))/(2*x);
   root2=(-y+sqrt(det))/(2*x);
   printf("\n Value of Root 1=%.2f and Value of Root 2=%.2f", root1,root2);
   }
   else if(det==0)
   {
   root1=root2= -y/(2*x);
   printf("\n Value of Root 1=%.2f and Value of Root 2=%.2f", root1,root2);
   }
   else
   {
   real = -y/(2*x);
   img = sqrt(-det)/(2*x);
   printf("\n Value of Root 1=%.2f+%.2fi and Value of Root 2=%.2f-%.2fi", real, img, real, img);
   }
   getch ();
 }