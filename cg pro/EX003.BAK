#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void lineatt();
void ciratt();
void ellatt();
void main()
{
int gd=DETECT,gm,f=1,ch;
initgraph(&gd,&gm,"..//bgi");
while(f==1)
{
clrscr();
cleardevice();
printf("\n **********MENU**********");
printf("1:Line attributes\n");
printf("2:Circle attributes\n");
printf("3:Ellipse attributes\n");
printf("4:Exit\n");
printf("\n **************************");
printf("\n \n Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
 case 1:
 lineatt();
 break;
 case 2:
 ciratt();
 break;
 case 3:
 ellatt();
 break;
 case 4:
 f=0;
 exit(0);
 }
}
getch();
closegraph();
}
void lineatt()
{
int x1,y1,x2,y2,sl,lt,lc;
printf("\n Enter line co-ordinate points:");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
printf("\n Enter a number for line style: \n");
scanf("%d",&sl);
printf("\n Enter for 1/2/3 for thickness:\n");
scanf("%d",&lt);
printf("\n Enter a number for color: \n");
scanf("%d",&lc);
clrscr();
cleardevice();
setcolor(lc);
setlinestyle(sl,1,lt);
line(x1,y1,x2,y2);
getch();
}
void ciratt()
{
 int x,y,c,cc,cf;
 printf("\n Enter radius:");
 scanf("%d",&c);
 printf("\n Enter center co-ordinates:");
 scanf("%d%d",&x,&y);
 printf("\n Enter a number for color:");
 scanf("%d",&cc);
 printf("\n Enter a number for fill style:");
 scanf("%d",&cf);
 clrscr();
 cleardevice();
 setcolor(cc);
 setfillstyle(cf,cc);
 circle(x,y,c);
 floodfill(x,y,cc);
 getch();
}
void ellatt()
{
 int x,y,xc,yc,ec,ef;
 printf("\n Enter X radius:");
 scanf("%d",&xc);
 printf("\n Enter Y radius:");
 scanf("%d",&yc);
 printf("\n Enter center co-ordinates:");
 scanf("%d%d",&x,&y);
 printf("\n Enter a number for color:");
 scanf("%d",&ec);
 printf("\n Enter a number for fill style:");
 scanf("%d",&ef);
 clrscr();
 cleardevice();
 setcolor(ec);
 setfillstyle(ef,ec);
 ellipse(x,y,0,360,xc,yc);
 fillellipse(x,y,xc,yc);
 getch(); }