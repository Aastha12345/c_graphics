#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
int main() {
    int i=0, gd = 0, gm;
    int x,y;
    initgraph( & gd, & gm, NULL);

//------To get max coordinates of x and y
x=getmaxx();
y=getmaxy();


settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
setbkcolor(3);
outtextxy(25,240,"Press any key to view the moving car");
getch();


setbkcolor(7);
setcolor(10);

for(i=0;i<=420;i=i+10)
{

//-----1st building

setcolor(1);
rectangle(0,0,(x/4),200);
setfillstyle(HATCH_FILL,9);
floodfill(1,1,1);

//-----2 nd build

setcolor(1);
rectangle((x/4)+1,100,(2*x/4),200);
setfillstyle(HATCH_FILL,12);
floodfill((x/4)+2,101,1);

//-----3rd building
setcolor(1);
rectangle((2*x)/4+1,50,(3*x/4),200);
setfillstyle(HATCH_FILL,6);
floodfill((2*x)/4+2,51,1);

//-----4th buildind
setcolor(1);
rectangle((3*x)/4+1,150,x,200);
setfillstyle(HATCH_FILL,9);
floodfill((3*x)/4+2,151,1);


//-----CAR--------------
setcolor(5) ;
rectangle(50+i,275,150+i,400);
rectangle(150+i,350,200+i,400);
rectangle(170+i,360,190+i,300);

//-----WHEELS-----------
circle(75+i,410,10);
circle(175+i,410,10);

delay(100);
if(i==420)
break;
cleardevice();
}
getch();
closegraph();
return 0;
}