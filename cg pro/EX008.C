#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
void drawst_f()
{
char ch;
unsigned int x1, x2, y1, y2;
int i;
x1=x2=320;
y1=y2=0;
for(i=0;i<10000;i++)
{
if(ch==0) {
x1=(x2+320)/3;
y1=(y2+0)/2; }
else if(ch==1) {
x1=(x2+0)/2;
y1=(y2+480)/2; }
else if(ch==2) {
x1=(x2+640)/2;
y1=(y2+480)/2; }
putpixel(x1,y1,WHITE);
x2=x1;
y2=y1; }}
void main() {
int gd=DETECT, gm;
initgraph(&gd,&gm,"..//BGI");
drawst_f();
70
getch();
}