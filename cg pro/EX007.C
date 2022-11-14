#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<math.h>
int x,y,z;
struct cube {
 int x1,y1,z1;
};
struct cube1 {
 int x2,y2,z2;
};
struct cube a[8]={0},t[8]={0},f[8]={0},g[8]={0},k[8]={0},l[8]={0};
struct cube1 b[8]={0},c[8]={0},d[8]={0},e[8]={0},h[8]={0},j[8]={0};
void init()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"e:\\tcplus\\bgi");
}
void create();
void drawcube(struct cube1 v[]);
void rotate();
void main()
{
int ch,tx,ty,tz,i,sx,sy,sz,m=9;
init();
do
{
flushall();
gotoxy(1,1);
cleardevice();
printf(" MENU ");
printf("***********************");
printf("\n1.Create \n2.Translation\n3.Scaling\n4.Rotation\n5.Exit");
printf("\n\n Enter your choice:");
scanf("%d",&ch);
setcolor(m++);
switch(ch)
 {
 case 1:
cleardevice();
init();
create();
getch();
 break;
 case 2:
 init();
flushall();
cleardevice();
printf("\n Enter Translation vactor:");
scanf("%d%d%d",&tx,&ty,&tz);
init();
drawcube(b);
for(i=0;i<8;i++)
{
t[i].x1=a[i].x1+tx;
t[i].y1=a[i].y1+ty;
t[i].z1=a[i].z1+tz;
}
for(i=0;i<8;i++)
{
c[i].x2=t[i].x1+t[i].z1/2;
c[i].y2=t[i].y1+t[i].z1/2; }
drawcube(c);
break;
case 3:
cleardevice();
init();
flushall();
printf("Enter the scaling vector:");
scanf("%d%d%d",&sx,&sy,&sz);
init();
drawcube(b);
for(i=0;i<8;i++) {
f[i].x1=a[i].x1*sx;
f[i].y1=a[i].y1*sy;
f[i].z1=a[i].z1*sz; }
for(i=0;i<8;i++) {
d[i].x2=f[i].x1+f[i].z1/2;
d[i].y2=f[i].y1+f[i].z1/2; }
drawcube(d);
break;
case 4:
cleardevice();
init();
rotate();
break;
case 5:
closegraph();
exit(0);
default:
continue;
}
}
while(1);
}
void create()
{
int d,i;
flushall();
printf("\n Enter co-ordinates:");
scanf("%d%d%d",&x,&y,&z);
printf("\n Enter the side of cube");
scanf("%d",&d);
cleardevice();
setcolor(9);
settextstyle(0,0,5);
outtextxy(10,30,"cube");
a[0].x1=x;a[0].y1=y;a[0].z1=z;
a[1].x1=x+d;a[1].y1=y;a[1].z1=z;
a[2].x1=x+d;a[2].y1=y+d;a[2].z1=z;
a[3].x1=x;a[3].y1=y+d;a[3].z1=z;
a[4].x1=x;a[4].y1=y;a[4].z1=z-d;
a[5].x1=x+d;a[5].y1=y;a[5].z1=z-d;
a[6].x1=x+d;a[6].y1=y+d;a[6].z1=z-d;
a[7].x1=x;a[7].y1=y+d;a[7].z1=z-d;
for(i=0;i<8;i++)
{
 b[i].x2=a[i].x1+a[i].z1/2;
 b[i].y2=a[i].y1+a[i].z1/2;
}
cleardevice();
drawcube(b);
getch();
}
void drawcube(struct cube1 v[])
{
gotoxy(3,4);
line(v[0].x2,v[0].y2,v[1].x2,v[1].y2);
line(v[1].x2,v[1].y2,v[2].x2,v[2].y2);
line(v[2].x2,v[2].y2,v[3].x2,v[3].y2);
line(v[3].x2,v[3].y2,v[0].x2,v[0].y2);
line(v[4].x2,v[4].y2,v[5].x2,v[5].y2);
line(v[5].x2,v[5].y2,v[6].x2,v[6].y2);
line(v[6].x2,v[6].y2,v[7].x2,v[7].y2);
line(v[7].x2,v[7].y2,v[7].x2,v[7].y2);
line(v[0].x2,v[0].y2,v[4].x2,v[4].y2);
line(v[1].x2,v[1].y2,v[5].x2,v[5].y2);
line(v[2].x2,v[2].y2,v[6].x2,v[6].y2);
line(v[3].x2,v[3].y2,v[7].x2,v[7].y2);
line(v[4].x2,v[4].y2,v[7].x2,v[7].y2);
getch();
delay(5);
}
void rotate()
{
cleardevice();
int cho,i,n;
float theta;
flushall();
printf("Rotation with respect to axis:");
printf("\n\t1.x_axis\n\t2.y_axis\n\t3.z_axis\n\t4.exit");
printf("\n Enter ur choice");
scanf("%d",&cho);
printf("\n Enter rotation angle");
62
scanf("%f",&theta);
theta=(theta)*180/3.14;
switch(cho)
{
case 1:
cleardevice();
init();
drawcube(b);
for(i=0;i<8;i++)
{
 g[i].x1=a[i].x1;
 g[i].y1=(a[i].y1-y)*cos(theta)+(a[i].z1-z)*sin(theta)+y;
 g[i].z1=(a[i].y1-y)*sin(theta)+(a[i].z1-z)*cos(theta)+z;
}
for(i=0;i<8;i++)
{
 e[i].x2=g[i].x1+g[i].z1/2;
 e[i].y2=g[i].y1+g[i].z1/2;
}
drawcube(e);
settextstyle(0,0,8);
setcolor(14);
outtextxy(20,360,"stop");
getch();
cleardevice();
63
 break;
case 2:
cleardevice();
init();
drawcube(b);
for(i=0;i<8;i++)
{
 k[i].y1=(a[i].x1-x)*cos(theta)+(a[i].z1-z)*sin(theta)+x;
 k[i].y1=a[i].y1;
 k[i].y1=(a[i].x1-x)*sin(theta)+(a[i].z1-z)*cos(theta)+z;
}
for(i=0;i<8;i++)
{
 h[i].x2=k[i].x1+k[i].z1/2;
 h[i].y2=k[i].y1+k[i].z1/2;
}
drawcube(h);
settextstyle(0,0,8);
setcolor(14);
outtextxy(20,360,"stop");
getch();
cleardevice();
break;
case 3:
cleardevice();
64
init();
drawcube(b);
for(i=0;i<8;i++)
{
 l[i].x1=(a[i].x1-x)*cos(theta)+(a[i].y1-y)*sin(theta)+x;
 l[i].z1=(a[i].x1-x)*sin(theta)+(a[i].y1-y)*cos(theta)+y;
 l[i].y1=a[i].z1;
}
for(i=0;i<8;i++)
{
 j[i].x2=l[i].x1+l[i].z1/2;
 j[i].y2=l[i].y1+l[i].z1/2;
}
drawcube(j);
cleardevice();
settextstyle(0,0,8);
setcolor(14);
outtextxy(20,360,"stop");
getch();
cleardevice();
break;
default:
 puts("error");