#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm=0,xa,ya,r,p,k,x,y;
initgraph(&gd,&gm,"D:\\TC\\BGI");
printf("Enter the coordinates");
scanf("%d%d",&xa,&ya);
printf("Enter the radius");
scanf("%d",&r);
p=1-r;
x=0;
y=r;
for(k=0;x<y;k++
)
{
if(p<0) {
p=p+(2*x)+2+1;
x=x+1; }
else {
p=p+(2*x)+2+1-(2*y)+2;
x=x+1;
y=y-1;
}
putpixel(xa+x,ya+y,1);
putpixel(xa-x,ya+y,2);
putpixel(xa+x,ya-y,3);
putpixel(xa-x,ya-y,4);
putpixel(xa+y,ya+x,5);
putpixel(xa-y,ya+x,6);
putpixel(xa+y,ya-x,7);
putpixel(xa-y,ya-x,8);
}}