
#include<stdio.h>
#include<graphics.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<time.h>
#include<windows.h>
void board();
void goti(int);
int green(int);
int greenb(int);
int greenc(int);
int greend(int);
int yellow(int);
int yellowb(int);
int yellowc(int);
int yellowd(int);
int input(int);
int red(int);
int redb(int);
int redc(int);
int redd(int);
int blue(int);
int blueb(int);
int bluec(int);
int blued(int);
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"Press any key to start the game");
    getch();
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(60,60,"please wait game is loading");
 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(170,255,"LOADING");
int ia,ja;
    rectangle(170,210,340,240);
    for(ia=0;ia<=140;ia=ia+1)
    {
        for(ja=0;ja<10000000;ja++)
        {

        }
        rectangle(170+ia,210,200+ia,240);

    }
    cleardevice();


   int i,j=0,upper=6,lower=1,a,b=0,c,d,e,f,g,h,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;



    board();
       getch();
       for(i=0;i<200;i++)
       {
           A:


a=(rand()%(upper-lower+1))+lower;

printf("%d",a);
setcolor(GREEN);//starting point for dice
    setfillstyle(SOLID_FILL,GREEN);
    rectangle(460,20,510,55);
    floodfill(465,25,GREEN);
    if(a==1)
    {
         setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(485,37,5);
         floodfill(485,37,WHITE);

    }
    if(a==2)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(476,37,5);
         circle(495,37,5);
         floodfill(476,37,WHITE);
         floodfill(495,37,WHITE);


    }
    if(a==3)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,37,5);
         circle(486,37,5);
         circle(499,37,5);
         floodfill(472,37,WHITE);
         floodfill(486,37,WHITE);
         floodfill(499,37,WHITE);



    }
    if(a==4)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(476,30,5);
         circle(495,30,5);
         circle(476,47,5);
         circle(495,47,5);
         floodfill(476,30,WHITE);
         floodfill(495,30,WHITE);
         floodfill(476,47,WHITE);
         floodfill(495,47,WHITE);

    }
    if(a==5)
    {
        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,30,5);
         circle(500,30,5);
         circle(472,47,5);
         circle(500,47,5);
         circle(486,37,5);
         floodfill(486,37,WHITE);
         floodfill(472,30,WHITE);
         floodfill(500,30,WHITE);
         floodfill(472,47,WHITE);
         floodfill(500,47,WHITE);

    }
    if(a==6)
    {

        setcolor(WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         circle(472,30,5);
         circle(486,30,5);
         circle(499,30,5);
         circle(472,47,5);
         circle(486,47,5);
         circle(499,47,5);

         floodfill(472,30,WHITE);
         floodfill(486,30,WHITE);
         floodfill(499,30,WHITE);
         floodfill(472,47,WHITE);
         floodfill(486,47,WHITE);
         floodfill(499,47,WHITE);


    }//for dice

srand(time(0));


      if(j==0)
      {

          board();
          malinga:
              settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(180,225,"PRESS");
          if(getch()=='a')
          {

       c=green(a);
       greenb(b);
       greenc(b);
       greend(b);
       red(b);
       redb(b);
       redc(b);
       redd(b);
       blue(b);
       blueb(b);
       bluec(b);
       blued(b);
       yellow(b);
       yellowb(b);
       yellowc(b);
       yellowd(b);
       if(c+13==d)
       {
           red(9910);
       }
       if(c+13==d)
       {
           red(9910);
       }

          }
        else if(getch()=='b')
          {

       green(b);
       greenb(a);
       greenc(b);
       greend(b);
       red(b);
       redb(b);
       redc(b);
       redd(b);
       blue(b);
       blueb(b);
       bluec(b);
       blued(b);
       yellow(b);
       yellowb(b);
       yellowc(b);
       yellowd(b);
          }
         else  if(getch()=='c')
          {

       green(b);
       greenb(b);
       greenc(a);
       greend(b);
       red(b);
       redb(b);
       redc(b);
       redd(b);
       blue(b);
       blueb(b);
       bluec(b);
       blued(b);
       yellow(b);
       yellowb(b);
       yellowc(b);
       yellowd(b);
          }
         else  if(getch()=='d')
          {

       green(b);
       greenb(b);
       greenc(b);
       greend(a);
       red(b);
       redb(b);
       redc(b);
       redb(b);
       blue(b);
       blueb(b);
       bluec(b);
       blued(b);
       yellow(b);
       yellowb(b);
       yellowc(b);
       yellowd(b);
          }
          else
          {
              goto malinga;
          }

       getch();
       cleardevice();
       if(a==1||a==6)
       {
           goto A;
       }

       j++;
       }
       else if(j==1)
      {
          board();
          saw:
               settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(180,225,"PRESS");
          if(getch()=='a')
          {


            red(a);
            redb(b);
            redc(b);
            redd(b);
            green(b);
       greenb(b);
       greenc(b);
       greend(b);
       blue(b);
       blueb(b);
       bluec(b);
       blued(b);
       yellow(b);
       yellowb(b);
       yellowc(b);
       yellowd(b);
          }
         else if(getch()=='b')
          {


            red(b);
            redb(a);
            redc(b);
            redd(b);
            green(b);
       greenb(b);
       greenc(b);
       greend(b);
       blue(b);
       blueb(b);
       bluec(b);
       blued(b);
       yellow(b);
       yellowb(b);
       yellowc(b);
       yellowd(b);
          }
          else if(getch()=='c')
          {


            red(b);
            redb(b);
            redc(a);
            redd(b);
            green(b);
       greenb(b);
       greenc(b);
       greend(b);
       blue(b);
       blueb(b);
       bluec(b);
       blued(b);
       yellow(b);
       yellowb(b);
       yellowc(b);
       yellowd(b);
          }
          else if(getch()=='d')
          {


            red(b);
            redb(b);
            redc(b);
            redd(a);
            green(b);
       greenb(b);
       greenc(b);
       greend(b);
       blue(b);
       blueb(b);
       bluec(b);
       blued(b);
       yellow(b);
       yellowb(b);
       yellowc(b);
       yellowd(b);
          }
          else
          {
              goto saw;
          }
       getch();
       cleardevice();
        if(a==1||a==6)
       {
           goto A;
       }
       j++;
       }
       else if(j==2)
      {
          board();
          malinga1:
               settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(180,225,"PRESS");

           if(getch()=='a')
          {

       green(b);
       greenb(b);
       greenc(b);
       greend(b);
       red(b);
       redb(b);
       blue(a);
       blueb(b);
       bluec(b);
       blued(b);
       yellow(b);
       yellowb(b);
       yellowc(b);
       yellowd(b);
          }
        else if(getch()=='b')
          {

       green(b);
       greenb(b);
       greenc(b);
       greend(b);
       red(b);
       redb(b);
       blue(b);
       blueb(a);
       bluec(b);
       blued(b);
       yellow(b);
       yellowb(b);
       yellowc(b);
       yellowd(b);
          }
        else  if(getch()=='c')
          {

       green(b);
       greenb(b);
       greenc(b);
       greend(b);
       red(b);
       redb(b);
       blue(b);
       blueb(b);
       bluec(a);
       blued(b);
       yellow(b);
       yellowb(b);
       yellowc(b);
       yellowd(b);
          }
         else  if(getch()=='d')
          {

       green(b);
       greenb(b);
       greenc(b);
       greend(b);
       red(b);
       redb(b);
       blue(b);
       blueb(b);
       bluec(b);
       blued(a);
       yellow(b);
       yellowb(b);
       yellowc(b);
       yellowd(b);
          }
          else
          {
              goto malinga1;
          }

       cleardevice();
        if(a==1||a==6)
       {
           goto A;
       }

       j++;
       }
       else if(j==3)
      {
          board();
          malinga2:
               settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(180,225,"PRESS");
           if(getch()=='a')
          {

       green(b);
       greenb(b);
       greenc(b);
       greend(b);
       red(b);
       redb(b);
       blue(b);
       blueb(b);
       bluec(b);
       blued(b);
       yellow(a);
       yellowb(b);
       yellowc(b);
       yellowd(b);
          }
        else if(getch()=='b')
          {

       green(b);
       greenb(b);
       greenc(b);
       greend(b);
       red(b);
       redb(b);
       blue(b);
       blueb(b);
       bluec(b);
       blued(b);
       yellow(b);
       yellowb(a);
       yellowc(b);
       yellowd(b);
          }
          else if(getch()=='c')
          {

       green(b);
       greenb(b);
       greenc(b);
       greend(b);
       red(b);
       redb(b);
       blue(b);
       blueb(b);
       bluec(b);
       blued(b);
       yellow(b);
       yellowb(b);
       yellowc(a);
       yellowd(b);
          }
          else if(getch()=='d')
          {

       green(b);
       greenb(b);
       greenc(b);
       greend(b);
       red(b);
       redb(b);
       blue(b);
       blueb(b);
       bluec(b);
       blued(b);
       yellow(b);
       yellowb(b);
       yellowc(b);
       yellowd(a);
          }
          else
          {
              goto malinga2;
          }

          getch();
       cleardevice();
        if(a==1||a==6)
       {
           goto A;
       }

       j=0;
       }






       }

closegraph();


    return 0;
}


void board()
{

    int i,j;

//BOARD COLOR

   setcolor(BLUE);
   setfillstyle(SOLID_FILL,BLUE);
   line(180,180,270,180);
   line(180,180,225,225);
   line(270,180,225,225);
   floodfill(225,195,BLUE);

   setcolor(RED);
   setfillstyle(SOLID_FILL,RED);
   line(180,180,180,270);
   line(180,180,225,225);
   line(180,270,225,225);
   floodfill(195,225,RED);

   setcolor(GREEN);
   setfillstyle(SOLID_FILL,GREEN);
   line(180,270,270,270);
   line(180,270,225,225);
   line(270,270,225,225);
   floodfill(225,255,GREEN);

   setcolor(YELLOW);
   setfillstyle(SOLID_FILL,YELLOW);
   line(270,270,270,180);
   line(270,270,225,225);
   line(270,180,225,225);
   floodfill(255,225,YELLOW);


    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    rectangle(0,270,180,450);
    floodfill(1,280,GREEN);
    rectangle(210,270,240,420);
    floodfill(215,316,GREEN);
    rectangle(180,390,210,420);
    floodfill(185,396,GREEN);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(20,290,160,430);
    setcolor(WHITE);
    j=300;
    for(i=1;i<=5;i++)
    {

        line(180,j,270,j);
        j=j+30;
    }
    line(210,270,210,450);
    line(240,270,240,450);

    floodfill(90,360,WHITE);
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(45,315,25);
    floodfill(46,316,GREEN);
    circle(135,315,25);
    floodfill(136,310,GREEN);
    circle(45,405,25);
    floodfill(46,390,GREEN);
    circle(135,405,25);
    floodfill(140,390,GREEN);

    setcolor(LIGHTGREEN);
    circle(45,315,25);
    circle(135,315,25);
    circle(45,405,25);
    circle(135,405,25);
    //LOWERMOST PART

    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    rectangle(0,0,180,180);
    floodfill(20,60,RED);
    rectangle(30,210,180,240);
    floodfill(35,220,RED);
    rectangle(30,180,60,210);
    floodfill(40,190,RED);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(20,20,160,160);
    floodfill(90,150,WHITE);
    j=30;
    for(i=1;i<=5;i++)
    {

        line(j,180,j,270);
        j=j+30;
    }
    line(0,210,180,210);
    line(0,240,180,240);
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(45,45,25);
    floodfill(46,48,RED);
    circle(135,45,25);
    floodfill(136,47,RED);
    circle(45,135,25);
    floodfill(46,140,RED);
    circle(135,135,25);
    floodfill(140,140,RED);

    setcolor(LIGHTRED);
    circle(45,45,25);
    circle(135,45,25);
    circle(45,135,25);
    circle(135,135,25);
    //TOPMOST PART



    setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
    rectangle(270,0,450,180);
    floodfill(290,60,BLUE);
    rectangle(210,30,240,180);
    floodfill(215,150,BLUE);
    rectangle(240,30,270,60);
    floodfill(245,50,BLUE);
    floodfill(245,50,BLUE);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(290,20,430,160);
    floodfill(300,70,WHITE);
     j=30;
    for(i=1;i<=5;i++)
    {

        line(180,j,270,j);
        j=j+30;
    }
    line(210,0,210,180);
    line(240,0,240,180);

    setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
    circle(315,45,25);
    floodfill(316,48,BLUE);
    circle(405,45,25);
    floodfill(410,47,BLUE);
    circle(315,135,25);
    floodfill(320,140,BLUE);
    circle(405,135,25);
    floodfill(410,140,BLUE);

    setcolor(LIGHTBLUE);
    circle(315,45,25);
    circle(405,45,25);
    circle(315,135,25);
    circle(405,135,25);

    //TOP RIGHT


    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(270,270,450,450);
    floodfill(290,300,YELLOW);
    rectangle(270,210,420,240);
    floodfill(300,220,YELLOW);
    rectangle(390,240,420,270);
    floodfill(395,250,YELLOW);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(290,290,430,430);
    floodfill(300,330,WHITE);
    j=300;
    for(i=1;i<=5;i++)
    {

        line(j,180,j,270);
        j=j+30;
    }
    line(270,210,450,210);
    line(270,240,450,240);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(315,315,25);
    floodfill(316,316,YELLOW);
     circle(405,315,25);
    floodfill(410,317,YELLOW);
    circle(315,405,25);
    floodfill(320,410,YELLOW);
     circle(405,405,25);
    floodfill(410,410,YELLOW);

    setcolor(7);
    circle(315,315,25);
    circle(405,315,25);
    circle(315,405,25);
    circle(405,405,25);
    //BOTTOM RIGHT

    setcolor(WHITE);
    rectangle(0,0,450,450);
    rectangle(0,180,450,270);
    rectangle(180,0,270,450);

    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(65,245,"*");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(185,65,"*");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(365,185,"*");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(245,365,"*");
    //star

    setcolor(BLUE);
    line(225,10,225,25);
    line(225,25,230,20);
    line(225,25,220,20);
    //top
    setcolor(GREEN);
    line(225,440,225,425);
    line(225,425,230,430);
    line(225,425,220,430);
    //bottim
    setcolor(RED);
    line(10,225,25,225);
    line(25,225,20,220);
    line(25,225,20,230);
    //left
    setcolor(YELLOW);
    line(440,225,425,225);
    line(425,225,430,230);
    line(425,225,430,220);
    //right arrows

}
int yellow(int a)
{
   static int saphal,upper=6,lower=1,b=0,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,x1,z1,z,y,saw=0,ok=1;


saphal=a;

if(saphal==1||saw==1)
{

   saw=1;
  b=b+a;
  if(b<57)
  {

  }
  else
  {
      b=b-a;
  }
if(ok==1)
{

    circle(405,255,15);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(405,255,"a");
    b=0;
    ok++;


}
if(b<5)
{


    board();
c=b*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(405-c,255,15);
floodfill(405-c,255,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(390-c,255,"a");
    return b;

}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(255,255+e,15);
floodfill(255,255+e,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+e,"a");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(255-g,435,15);
 floodfill(255-g,435,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-g,435,"a");
    return b;
}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195,435-k,15);
 floodfill(195,435-k,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,435-k,"a");
    return b;


}
else if(b>17&&b<24)
{
    board();
 l=b-17;
 m=l*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195-m,255,15);
 floodfill(195-m,255,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-m,255,"a");
    return b;




}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(15,255-o,15);
floodfill(15,255-o,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,255-o,"a");
    return b;


}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(15+q,195,15);
floodfill(15+q,195,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+q,195,"a");
    return b;


}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195,195-s,15);
 floodfill(195,195-s,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-s,"a");
    return b;


}
else if(b>36&&b<39)
{
    board();
 t=b-36;
 u=t*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195+u,15,15);
 floodfill(195+u,15,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+u,15,"a");
    return b;


}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(255,15+w,15);
 floodfill(255,15+w,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,15+w,"a");
    return b;


}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(255+y,195,15);
 floodfill(255+y,195,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255+y,195,"a");
    return b;


}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(435,195+z,15);
floodfill(435,195+z,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+z,"a");
    return b;



}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(435-z1,225,15);
    floodfill(435-z1,225,YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-z1,225,"a");
    return 11;


}
else if(b==56)
{
    cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER YELLOW IS WINNER");
    getch();
    return 111;



}
else
{

}





}
}
int yellowb(int a)
{
   static int saphal,upper=6,lower=1,b=0,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,x1,z1,z,y,saw=0,ok=1;


saphal=a;

if(saphal==1||saw==1)
{

   saw=1;
  b=b+a;
  if(b<57)
  {

  }
  else
  {
      b=b-a;
  }
if(ok==1)
{

    circle(405,255,15);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(405,255,"b");
    b=0;
    ok++;

}
if(b<5)
{


    board();
c=b*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(405-c,255,15);
floodfill(405-c,255,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(390-c,255,"b");
    return b;

}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(255,255+e,15);
floodfill(255,255+e,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+e,"b");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(255-g,435,15);
 floodfill(255-g,435,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-g,435,"b");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195,435-k,15);
 floodfill(195,435-k,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,435-k,"b");
    return b;


}
else if(b>17&&b<24)
{
    board();
 l=b-17;
 m=l*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195-m,255,15);
 floodfill(195-m,255,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-m,255,"b");
    return b;




}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(15,255-o,15);
floodfill(15,255-o,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,255-o,"b");
    return b;


}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(15+q,195,15);
floodfill(15+q,195,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+q,195,"b");
    return b;


}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195,195-s,15);
 floodfill(195,195-s,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-s,"b");
    return b;


}
else if(b>36&&b<39)
{
    board();
 t=b-36;
 u=t*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195+u,15,15);
 floodfill(195+u,15,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+u,15,"b");
    return b;


}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(255,15+w,15);
 floodfill(255,15+w,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,15+w,"b");
    return b;


}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(255+y,195,15);
 floodfill(255+y,195,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255+y,195,"b");
    return b;


}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(435,195+z,15);
floodfill(435,195+z,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+z,"b");
    return b;



}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(435-z1,225,15);
    floodfill(435-z1,225,YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-z1,225,"b");
    return 111;


}
else if(b==56)
{
    cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER YELLOW IS WINNER");
    getch();
    i=200;
    return 1111;



}
else
{

}





}
}
int yellowc(int a)
{
   static int saphal,upper=6,lower=1,b=0,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,x1,z1,z,y,saw=0,ok=1;


saphal=a;

if(saphal==1||saw==1)
{

   saw=1;
  b=b+a;
  if(b<57)
  {

  }
  else
  {
      b=b-a;
  }
if(ok==1)
{

    circle(405,255,15);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(405,255,"c");
    b=0;
    ok++;

}
if(b<5)
{


    board();
c=b*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(405-c,255,15);
floodfill(405-c,255,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(390-c,255,"c");
    return b;

}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(255,255+e,15);
floodfill(255,255+e,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+e,"c");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(255-g,435,15);
 floodfill(255-g,435,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-g,435,"c");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195,435-k,15);
 floodfill(195,435-k,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,435-k,"c");
    return b;


}
else if(b>17&&b<24)
{
    board();
 l=b-17;
 m=l*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195-m,255,15);
 floodfill(195-m,255,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-m,255,"c");
    return b;




}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(15,255-o,15);
floodfill(15,255-o,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,255-o,"c");
    return b;


}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(15+q,195,15);
floodfill(15+q,195,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+q,195,"c");
    return b;


}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195,195-s,15);
 floodfill(195,195-s,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-s,"c");
    return b;


}
else if(b>36&&b<39)
{
    board();
 t=b-36;
 u=t*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195+u,15,15);
 floodfill(195+u,15,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+u,15,"c");
    return b;


}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(255,15+w,15);
 floodfill(255,15+w,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,15+w,"c");
    return b;


}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(255+y,195,15);
 floodfill(255+y,195,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255+y,195,"c");
    return b;


}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(435,195+z,15);
floodfill(435,195+z,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+z,"c");
    return b;



}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(435-z1,225,15);
    floodfill(435-z1,225,YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-z1,225,"c");
    return 1111;


}
else if(b==56)
{
    cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER YELLOW IS WINNER");
    getch();
    i=200;
    return 1111;



}
else
{

}





}
}
int yellowd(int a)
{
   static int saphal,upper=6,lower=1,b=0,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,x1,z1,z,y,saw=0,ok=1;


saphal=a;

if(saphal==1||saw==1)
{

   saw=1;
  b=b+a;
  if(b<57)
  {

  }
  else
  {
      b=b-a;
  }
if(ok==1)
{

    circle(405,255,15);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(405,255,"d");
    b=0;
    ok++;

}
if(b<5)
{


    board();
c=b*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(405-c,255,15);
floodfill(405-c,255,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(390-c,255,"d");
    return b;

}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(255,255+e,15);
floodfill(255,255+e,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+e,"d");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(255-g,435,15);
 floodfill(255-g,435,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-g,435,"d");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195,435-k,15);
 floodfill(195,435-k,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,435-k,"d");
    return b;


}
else if(b>17&&b<24)
{
    board();
 l=b-17;
 m=l*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195-m,255,15);
 floodfill(195-m,255,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-m,255,"d");
    return b;




}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(15,255-o,15);
floodfill(15,255-o,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,255-o,"d");
    return b;


}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(15+q,195,15);
floodfill(15+q,195,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+q,195,"d");
    return b;


}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195,195-s,15);
 floodfill(195,195-s,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-s,"d");
    return b;


}
else if(b>36&&b<39)
{
    board();
 t=b-36;
 u=t*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(195+u,15,15);
 floodfill(195+u,15,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+u,15,"d");
    return b;


}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(255,15+w,15);
 floodfill(255,15+w,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,15+w,"d");
    return b;


}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 circle(255+y,195,15);
 floodfill(255+y,195,YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255+y,195,"d");
    return b;

}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(435,195+z,15);
floodfill(435,195+z,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+z,"d");
    return b;



}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(435-z1,225,15);
    floodfill(435-z1,225,YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-z1,225,"d");
    return 1111;


}
else if(b==56)
{
    cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER YELLOW IS WINNER");
    getch();
    i=200;
    return 1111;



}
else
{

}





}
}


int blue(int a)
{
   static int saphal,upper=6,lower=1,b=0,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,x1,z1,z,y,saw=0,ok=1;

  saphal=a;

if(saphal==1||saw==1)
{

   saw=1;
  b=b+a;
   if(b<57)
  {

  }
  else
  {
      b=b-a;
  }
if(ok==1)
{
    circle(255,45,15);
    b=0;
    ok++;
}
if(b<5)
{

    board();
c=b*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(255,45+c,15);
floodfill(255,45+c,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,45+c,"a");
    return b;


}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(255+e,195,15);
floodfill(255+e,195,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255+e,195,"a");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(435,195+g,15);
 floodfill(435,195+g,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+g,"a");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(435-k,255,15);
 floodfill(435-k,255,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-k,225,"a");
    return b;


}
else if(b>17&&b<24)
{

    board();
 l=b-17;
 m=l*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(255,255+m,15);
 floodfill(255,255+m,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+m,"a");
    return b;


}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(255-o,435,15);
floodfill(255-o,435,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-o,435,"a");
    return b;

}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(195,435-q,15);
floodfill(195,435-q,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,435-q,"a");
    return b;

}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(195-s,255,15);
 floodfill(195-s,255,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-s,255,"a");
    return b;

}
else if(b>36&&b<39)
{

    board();
 t=b-36;
 u=t*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(15,255-u,15);
 floodfill(15,255-u,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,255-u,"a");
    return b;

}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(15+w,195,15);
 floodfill(15+w,195,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+w,195,"a");
    return b;

}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(195,195-y,15);
 floodfill(195,195-y,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-y,"a");
    return b;

}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(195+z,15,15);
floodfill(195+z,15,9);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+z,15,"a");
    return b;

}



}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(9);
    setfillstyle(SOLID_FILL,9);
    circle(225,15+z1,15);
    floodfill(225,15+z1,9);
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,15+z1,"a");
    return 2222;

}
else if(b==56)
{
    cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER BLUE IS WINNER");
    getch();
    i=200;
    return 2222;



}




}
int blueb(int a)
{
   static int saphal,upper=6,lower=1,b=0,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,x1,z1,z,y,saw=0,ok=1;

  saphal=a;

if(saphal==1||saw==1)
{

   saw=1;
  b=b+a;
   if(b<57)
  {

  }
  else
  {
      b=b-a;
  }
if(ok==1)
{
    circle(255,45,15);
    b=0;
    ok++;
}
if(b<5)
{

    board();
c=b*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(255,45+c,15);
floodfill(255,45+c,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,45+c,"b");
    return b;


}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(255+e,195,15);
floodfill(255+e,195,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255+e,195,"b");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(435,195+g,15);
 floodfill(435,195+g,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+g,"b");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(435-k,255,15);
 floodfill(435-k,255,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-k,225,"b");
    return b;


}
else if(b>17&&b<24)
{

    board();
 l=b-17;
 m=l*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(255,255+m,15);
 floodfill(255,255+m,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+m,"b");
    return b;


}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(255-o,435,15);
floodfill(255-o,435,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-o,435,"b");
    return b;

}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(195,435-q,15);
floodfill(195,435-q,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,435-q,"b");
    return b;

}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(195-s,255,15);
 floodfill(195-s,255,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-s,255,"b");
    return b;

}
else if(b>36&&b<39)
{

    board();
 t=b-36;
 u=t*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(15,255-u,15);
 floodfill(15,255-u,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,255-u,"b");
    return b;

}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(15+w,195,15);
 floodfill(15+w,195,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+w,195,"b");
    return b;

}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(195,195-y,15);
 floodfill(195,195-y,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-y,"b");
    return b;

}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(195+z,15,15);
floodfill(195+z,15,9);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+z,15,"b");
    return b;

}



}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(9);
    setfillstyle(SOLID_FILL,9);
    circle(225,15+z1,15);
    floodfill(225,15+z1,9);
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,15+z1,"b");
    return 2222;

}
else if(b==56)
{
    cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER BLUE IS WINNER");
    getch();
    i=200;
    return 2222;



}




}
int bluec(int a)
{
   static int saphal,upper=6,lower=1,b=0,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,x1,z1,z,y,saw=0,ok=1;

  saphal=a;

if(saphal==1||saw==1)
{

   saw=1;
  b=b+a;
   if(b<57)
  {

  }
  else
  {
      b=b-a;
  }
if(ok==1)
{
    circle(255,45,15);
    b=0;
    ok++;
}
if(b<5)
{

    board();
c=b*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(255,45+c,15);
floodfill(255,45+c,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,45+c,"c");
    return b;


}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(255+e,195,15);
floodfill(255+e,195,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255+e,195,"c");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(435,195+g,15);
 floodfill(435,195+g,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+g,"c");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(435-k,255,15);
 floodfill(435-k,255,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-k,225,"c");
    return b;


}
else if(b>17&&b<24)
{

    board();
 l=b-17;
 m=l*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(255,255+m,15);
 floodfill(255,255+m,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+m,"c");
    return b;


}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(255-o,435,15);
floodfill(255-o,435,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-o,435,"c");
    return b;

}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(195,435-q,15);
floodfill(195,435-q,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,435-q,"c");
    return b;

}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(195-s,255,15);
 floodfill(195-s,255,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-s,255,"c");
    return b;

}
else if(b>36&&b<39)
{

    board();
 t=b-36;
 u=t*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(15,255-u,15);
 floodfill(15,255-u,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,255-u,"c");
    return b;

}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(15+w,195,15);
 floodfill(15+w,195,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+w,195,"c");
    return b;

}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(195,195-y,15);
 floodfill(195,195-y,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-y,"c");
    return b;

}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(195+z,15,15);
floodfill(195+z,15,9);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+z,15,"c");
    return b;

}



}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(9);
    setfillstyle(SOLID_FILL,9);
    circle(225,15+z1,15);
    floodfill(225,15+z1,9);
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,15+z1,"c");

    return 2222;

}
else if(b==56)
{
    cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER BLUE IS WINNER");
    getch();
    i=200;
    return 2222;



}




}
int blued(int a)
{
   static int saphal,upper=6,lower=1,b=0,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,x1,z1,z,y,saw=0,ok=1;

  saphal=a;

if(saphal==1||saw==1)
{

   saw=1;
  b=b+a;
   if(b<57)
  {

  }
  else
  {
      b=b-a;
  }
if(ok==1)
{
    circle(255,45,15);
    b=0;
    ok++;
}
if(b<5)
{

    board();
c=b*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(255,45+c,15);
floodfill(255,45+c,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,45+c,"d");
    return b;


}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(255+e,195,15);
floodfill(255+e,195,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255+e,195,"d");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(435,195+g,15);
 floodfill(435,195+g,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+g,"d");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(435-k,255,15);
 floodfill(435-k,255,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-k,225,"d");
    return b;


}
else if(b>17&&b<24)
{

    board();
 l=b-17;
 m=l*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(255,255+m,15);
 floodfill(255,255+m,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+m,"d");
    return b;


}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(255-o,435,15);
floodfill(255-o,435,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-o,435,"d");
    return b;

}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(195,435-q,15);
floodfill(195,435-q,9);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,435-q,"d");
    return b;

}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(195-s,255,15);
 floodfill(195-s,255,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-s,255,"d");
    return b;

}
else if(b>36&&b<39)
{

    board();
 t=b-36;
 u=t*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(15,255-u,15);
 floodfill(15,255-u,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,255-u,"d");
    return b;

}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(15+w,195,15);
 floodfill(15+w,195,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+w,195,"d");
    return b;

}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(9);
setfillstyle(SOLID_FILL,9);
 circle(195,195-y,15);
 floodfill(195,195-y,9);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-y,"d");
    return b;

}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(9);
setfillstyle(SOLID_FILL,9);
circle(195+z,15,15);
floodfill(195+z,15,9);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+z,15,"d");
    return b;

}



}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(9);
    setfillstyle(SOLID_FILL,9);
    circle(225,15+z1,15);
    floodfill(225,15+z1,9);
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,15+z1,"d");
    return 2222;

}
else if(b==56)
{
    cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER BLUE IS WINNER");
    getch();
    i=200;
    return 2222;



}




}


int green(int a)
{
    static int saphal,upper=6,lower=1,b,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,x1,z1,saw=0,ok=1;

   saphal=a;

if(saphal==1||saw==1)
{
   saw=1;

b=b+a;
 if(b<57)
  {

  }
  else
  {
      b=b-a;
  }

if(ok==1)
{
    circle(195,405,15);
    b=0;
    ok++;
}
if(b<5)
{

    board();
c=b*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(195,405-c,15);
floodfill(195,405-c,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,405-c,"a");
    return b;


}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(195-e,255,15);
floodfill(195-e,255,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-e,225,"a");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(15,255-g,15);
 floodfill(15,255-g,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,225-g,"a");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(15+k,195,15);
 floodfill(15+k,195,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+k,195,"a");
    return b;


}
else if(b>17&&b<24)
{

    board();
 l=b-17;
 m=l*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(195,195-m,15);
 floodfill(195,195-m,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-m,"a");
    return b;


}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(195+o,15,15);
floodfill(195+o,15,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+o,15,"a");
    return b;

}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(255,15+q,15);
floodfill(255,15+q,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,15+q,"a");
    return b;

}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(255+s,195,15);
 floodfill(255+s,195,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225+s,195,"a");
    return b;

}
else if(b>36&&b<39)
{

    board();
 t=b-36;
 u=t*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(435,195+u,15);
 floodfill(435,195+u,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+u,"a");
    return b;

}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(435-w,255,15);
 floodfill(435-w,255,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-w,255,"a");
    return b;
}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(255,255+y,15);
 floodfill(255,255+y,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+y,"a");
    return b;

}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(255-z,435,15);
floodfill(255-z,435,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-z,435,"a");
    return b;

}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(10);
    setfillstyle(SOLID_FILL,10);
    circle(225,435-z1,15);
    floodfill(225,435-z1,10);
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,435-z1,"a");
    return 3333;

}
else if(b==56)
{
     cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER GREEN IS WINNER");
    getch();
    return 3333;


}
else
    {

    }




}
}
int greenb(int a)
{
    static int saphal,upper=6,lower=1,b,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,x1,z1,saw=0,ok=1;

   saphal=a;

if(saphal==1||saw==1)
{
   saw=1;

b=b+a;
 if(b<57)
  {

  }
  else
  {
      b=b-a;
  }

if(ok==1)
{
    circle(195,405,15);
    b=0;
    ok++;
}
if(b<5)
{

    board();
c=b*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(195,405-c,15);
floodfill(195,405-c,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,405-c,"b");
    return b;


}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(195-e,255,15);
floodfill(195-e,255,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-e,225,"b");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(15,255-g,15);
 floodfill(15,255-g,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,225-g,"b");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(15+k,195,15);
 floodfill(15+k,195,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+k,195,"b");
    return b;


}
else if(b>17&&b<24)
{

    board();
 l=b-17;
 m=l*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(195,195-m,15);
 floodfill(195,195-m,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-m,"b");
    return b;


}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(195+o,15,15);
floodfill(195+o,15,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+o,15,"b");
    return b;

}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(255,15+q,15);
floodfill(255,15+q,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,15+q,"b");
    return b;

}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(255+s,195,15);
 floodfill(255+s,195,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225+s,195,"b");
    return b;

}
else if(b>36&&b<39)
{

    board();
 t=b-36;
 u=t*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(435,195+u,15);
 floodfill(435,195+u,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+u,"b");
    return b;

}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(435-w,255,15);
 floodfill(435-w,255,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-w,255,"b");
    return b;

}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(255,255+y,15);
 floodfill(255,255+y,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+y,"b");
    return b;

}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(255-z,435,15);
floodfill(255-z,435,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-z,435,"b");
    return b;

}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(10);
    setfillstyle(SOLID_FILL,10);
    circle(225,435-z1,15);
    floodfill(225,435-z1,10);
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,435-z1,"b");
    return 3333;

}
else if(b==56)
{
     cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER GREEN IS WINNER");
    getch();
    return 3333;


}
else
    {

    }




}
}
int greenc(int a)
{
    static int saphal,upper=6,lower=1,b,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,x1,z1,saw=0,ok=1;

   saphal=a;

if(saphal==1||saw==1)
{
   saw=1;

b=b+a;
 if(b<57)
  {

  }
  else
  {
      b=b-a;
  }

if(ok==1)
{
    circle(195,405,15);
    b=0;
    ok++;
}
if(b<5)
{

    board();
c=b*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(195,405-c,15);
floodfill(195,405-c,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,405-c,"c");
    return b;


}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(195-e,255,15);
floodfill(195-e,255,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-e,225,"c");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(15,255-g,15);
 floodfill(15,255-g,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,225-g,"c");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(15+k,195,15);
 floodfill(15+k,195,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+k,195,"c");
    return b;


}
else if(b>17&&b<24)
{

    board();
 l=b-17;
 m=l*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(195,195-m,15);
 floodfill(195,195-m,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-m,"c");
    return b;


}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(195+o,15,15);
floodfill(195+o,15,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+o,15,"c");
    return b;

}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(255,15+q,15);
floodfill(255,15+q,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,15+q,"c");
    return b;

}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(255+s,195,15);
 floodfill(255+s,195,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225+s,195,"c");
    return b;

}
else if(b>36&&b<39)
{

    board();
 t=b-36;
 u=t*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(435,195+u,15);
 floodfill(435,195+u,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+u,"c");
    return b;

}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(435-w,255,15);
 floodfill(435-w,255,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-w,255,"c");
    return b;

}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(255,255+y,15);
 floodfill(255,255+y,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+y,"c");
    return b;

}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(255-z,435,15);
floodfill(255-z,435,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-z,435,"c");
    return b;

}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(10);
    setfillstyle(SOLID_FILL,10);
    circle(225,435-z1,15);
    floodfill(225,435-z1,10);
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,435-z1,"c");
    return 3333;

}
else if(b==56)
{
     cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER GREEN IS WINNER");
    getch();
    return 3333;


}
else
    {

    }




}
}
int greend(int a)
{
    static int saphal,upper=6,lower=1,b,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,x1,z1,saw=0,ok=1;

   saphal=a;

if(saphal==1||saw==1)
{
   saw=1;

b=b+a;
 if(b<57)
  {

  }
  else
  {
      b=b-a;
  }

if(ok==1)
{
    circle(195,405,15);
    b=0;
    ok++;
}
if(b<5)
{

    board();
c=b*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(195,405-c,15);
floodfill(195,405-c,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,405-c,"d");
    return b;


}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(195-e,255,15);
floodfill(195-e,255,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-e,225,"d");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(15,255-g,15);
 floodfill(15,255-g,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,225-g,"d");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(15+k,195,15);
 floodfill(15+k,195,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+k,195,"d");
    return b;


}
else if(b>17&&b<24)
{

    board();
 l=b-17;
 m=l*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(195,195-m,15);
 floodfill(195,195-m,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-m,"d");
    return b;


}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(195+o,15,15);
floodfill(195+o,15,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+o,15,"d");
    return b;

}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(255,15+q,15);
floodfill(255,15+q,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,15+q,"d");
    return b;

}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(255+s,195,15);
 floodfill(255+s,195,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225+s,195,"d");
    return b;

}
else if(b>36&&b<39)
{

    board();
 t=b-36;
 u=t*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(435,195+u,15);
 floodfill(435,195+u,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+u,"d");
    return b;

}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(435-w,255,15);
 floodfill(435-w,255,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-w,255,"d");
    return b;

}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(10);
setfillstyle(SOLID_FILL,10);
 circle(255,255+y,15);
 floodfill(255,255+y,10);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+y,"d");
    return b;

}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(10);
setfillstyle(SOLID_FILL,10);
circle(255-z,435,15);
floodfill(255-z,435,10);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-z,435,"d");
    return b;

}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(10);
    setfillstyle(SOLID_FILL,10);
    circle(225,435-z1,15);
    floodfill(225,435-z1,10);
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,435-z1,"d");
    return 3333;

}
else if(b==56)
{
     cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER GREEN IS WINNER");
    getch();
    return 3333;


}
else
    {

    }




}
}




int red(int a)
{
    static int saphal,upper=6,lower=1,b,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,z1,x1,saw=0,ok=1;

   saphal=a;

if(saphal==1||saw==1)
{
   saw=1;

b=b+a;
 if(b<57)
  {

  }
  else
  {
      b=b-a;
  }

if(ok==1)
{
    circle(45,195,15);
    b=0;
    ok++;
}
if(b<5)
{

    board();
c=b*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(45+c,195,15);
floodfill(45+c,195,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(45+c,195,"a");
    return b;


}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(195,195-e,15);
floodfill(195,195-e,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-e,"a");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(195+g,15,15);
 floodfill(195+g,15,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+g,15,"a");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255,15+k,15);
 floodfill(255,15+k,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,15+k,"a");
    return b;


}
else if(b>17&&b<24)
{

    board();
 l=b-17;
 m=l*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255+m,195,15);
 floodfill(255+m,195,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255+m,195,"a");
    return b;


}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(435,195+o,15);
floodfill(435,195+o,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+o,"a");
    return b;

}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(435-q,255,15);
floodfill(435-q,255,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-q,255,"a");
    return b;

}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255,255+s,15);
 floodfill(255,255+s,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+s,"a");
    return b;

}
else if(b>36&&b<39)
{

    board();
 t=b-36;
 u=t*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255-u,435,15);
 floodfill(255-u,435,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-u,435,"a");
    return b;

}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(195,435-w,15);
 floodfill(195,435-w,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,435-w,"a");
    return b;

}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(195-y,255,15);
 floodfill(195-y,255,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-y,255,"a");
    return b;

}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(15,255-z,15);
floodfill(15,255-z,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,255-z,"a");
    return b;


}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(12);
    setfillstyle(SOLID_FILL,12);
    circle(15+z1,225,15);
    floodfill(15+z1,225,12);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+z1,225,"a");
    return 4444;


}
else if(b==56)
{
     cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER RED IS WINNER");
    getch();
    return 4444;


}
else
{

}
}
}
int redb(int a)
{
    static int saphal,upper=6,lower=1,b,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,z1,x1,saw=0,ok=1;

   saphal=a;

if(saphal==1||saw==1)
{
   saw=1;

b=b+a;
 if(b<57)
  {

  }
  else
  {
      b=b-a;
  }

if(ok==1)
{
    circle(45,195,15);
    b=0;
    ok++;
}
if(b<5)
{

    board();
c=b*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(45+c,195,15);
floodfill(45+c,195,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(45+c,195,"b");
    return b;


}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(195,195-e,15);
floodfill(195,195-e,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-e,"b");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(195+g,15,15);
 floodfill(195+g,15,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+g,15,"b");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255,15+k,15);
 floodfill(255,15+k,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,15+k,"b");
    return b;


}
else if(b>17&&b<24)
{

    board();
 l=b-17;
 m=l*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255+m,195,15);
 floodfill(255+m,195,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255+m,195,"b");
    return b;


}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(435,195+o,15);
floodfill(435,195+o,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+o,"b");
    return b;

}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(435-q,255,15);
floodfill(435-q,255,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-q,255,"b");
    return b;

}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255,255+s,15);
 floodfill(255,255+s,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+s,"b");
    return b;

}
else if(b>36&&b<39)
{

    board();
 t=b-36;
 u=t*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255-u,435,15);
 floodfill(255-u,435,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-u,435,"b");
    return b;

}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(195,435-w,15);
 floodfill(195,435-w,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,435-w,"b");
    return b;

}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(195-y,255,15);
 floodfill(195-y,255,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-y,255,"b");
    return b;

}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(15,255-z,15);
floodfill(15,255-z,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,255-z,"b");
    return b;


}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(12);
    setfillstyle(SOLID_FILL,12);
    circle(15+z1,225,15);
    floodfill(15+z1,225,12);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+z1,225,"b");
    return 4444;


}
else if(b==56)
{
     cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER RED IS WINNER");
    getch();
    return 4444;


}
else
{

}




}
}
int redc(int a)
{
    static int saphal,upper=6,lower=1,b,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,z1,x1,saw=0,ok=1;

   saphal=a;

if(saphal==1||saw==1)
{
   saw=1;

b=b+a;
 if(b<57)
  {

  }
  else
  {
      b=b-a;
  }

if(ok==1)
{
    circle(45,195,15);
    b=0;
    ok++;
}
if(b<5)
{

    board();
c=b*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(45+c,195,15);
floodfill(45+c,195,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(45+c,195,"c");
    return b;


}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(195,195-e,15);
floodfill(195,195-e,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-e,"c");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(195+g,15,15);
 floodfill(195+g,15,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+g,15,"c");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255,15+k,15);
 floodfill(255,15+k,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,15+k,"c");
    return b;


}
else if(b>17&&b<24)
{

    board();
 l=b-17;
 m=l*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255+m,195,15);
 floodfill(255+m,195,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255+m,195,"c");
    return b;


}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(435,195+o,15);
floodfill(435,195+o,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+o,"c");
    return b;

}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(435-q,255,15);
floodfill(435-q,255,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-q,255,"c");
    return b;

}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255,255+s,15);
 floodfill(255,255+s,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+s,"c");
    return b;

}
else if(b>36&&b<39)
{

    board();
 t=b-36;
 u=t*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255-u,435,15);
 floodfill(255-u,435,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-u,435,"c");
    return b;

}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(195,435-w,15);
 floodfill(195,435-w,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,435-w,"c");
    return b;

}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(195-y,255,15);
 floodfill(195-y,255,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-y,255,"c");
    return b;

}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(15,255-z,15);
floodfill(15,255-z,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,255-z,"c");
    return b;


}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(12);
    setfillstyle(SOLID_FILL,12);
    circle(15+z1,225,15);
    floodfill(15+z1,225,12);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+z1,225,"c");
    return 4444;


}
else if(b==56)
{
     cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER RED IS WINNER");
    getch();
    return 4444;


}
else
{

}
}
}
int redd(int a)
{
    static int saphal,upper=6,lower=1,b,c,d,e,f,g,h,i,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,z1,x1,saw=0,ok=1;

   saphal=a;

if(saphal==1||saw==1)
{
   saw=1;

b=b+a;
 if(b<57)
  {

  }
  else
  {
      b=b-a;
  }

if(ok==1)
{
    circle(45,195,15);
    b=0;
    ok++;
}
if(b<5)
{

    board();
c=b*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(45+c,195,15);
floodfill(45+c,195,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(45+c,195,"d");
    return b;


}
else if(b>4&&b<11)
{

    board();
d=b-4;
e=30*d;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(195,195-e,15);
floodfill(195,195-e,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,195-e,"d");
    return b;

}
else if(b>10&&b<13)
{

    board();
 f=b-10;
 g=30*f;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(195+g,15,15);
 floodfill(195+g,15,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195+g,15,"d");
    return b;

}
else if(b>12&&b<18)
{

    board();
 h=b-12;
 k=h*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255,15+k,15);
 floodfill(255,15+k,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(225,15+k,"d");
    return b;


}
else if(b>17&&b<24)
{

    board();
 l=b-17;
 m=l*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255+m,195,15);
 floodfill(255+m,195,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255+m,195,"d");
    return b;


}
else if(b>23&&b<26)
{

    board();

n=b-23;
o=n*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(435,195+o,15);
floodfill(435,195+o,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435,195+o,"d");
    return b;

}
else if(b>25&&b<31)
{

    board();
p=b-25;
q=p*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(435-q,255,15);
floodfill(435-q,255,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(435-q,255,"d");
    return b;

}
else if(b>30&&b<37)
{

    board();
 r=b-30;
 s=r*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255,255+s,15);
 floodfill(255,255+s,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255,255+s,"d");
    return b;

}
else if(b>36&&b<39)
{

    board();
 t=b-36;
 u=t*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(255-u,435,15);
 floodfill(255-u,435,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(255-u,435,"d");
    return b;

}
else if(b>38&&b<44)
{

    board();
 v=b-38;
 w=v*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(195,435-w,15);
 floodfill(195,435-w,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195,435-w,"d");
    return b;

}
else if(b>43&&b<50)
{

    board();
 x=b-43;
 y=x*30;
 setcolor(12);
setfillstyle(SOLID_FILL,12);
 circle(195-y,255,15);
 floodfill(195-y,255,12);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(195-y,255,"d");
    return b;

}
else if(b>49&&b<51)
{

    board();
x=b-49;
z=x*30;
setcolor(12);
setfillstyle(SOLID_FILL,12);
circle(15,255-z,15);
floodfill(15,255-z,12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15,255-z,"d");
    return b;


}
else if(b>50&&b<56)
{

    board();
    x1=b-50;
    z1=x1*30;
    setcolor(12);
    setfillstyle(SOLID_FILL,12);
    circle(15+z1,225,15);
    floodfill(15+z1,225,12);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(15+z1,225,"d");
    return 4444;


}
else if(b==56)
{
     cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,40,"GAME IS OVER RED IS WINNER");
    getch();
    return 4444;


}
else
{

}
}
}
void goti(int a)
{


 if(a==1)
{
    setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(230,230,30);

   floodfill(230,230,WHITE);



}
else if(a==2)
{
     setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(230,210,20);

   floodfill(230,210,WHITE);
      setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(230,255,20);

   floodfill(230,255,WHITE);


}
else if(a==3)
{
     setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(230,195,13);

   floodfill(230,195,WHITE);
      setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(230,225,13);

   floodfill(230,225,WHITE);
     setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(230,255,13);

   floodfill(230,255,WHITE);



}
else if(a==4)
{
      setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(240,195,13);

   floodfill(240,195,WHITE);
      setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(240,240,13);

   floodfill(240,240,WHITE);
     setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(210,195,13);

   floodfill(210,195,WHITE);
     setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(210,240,13);

   floodfill(210,240,WHITE);






}
else if(a==5)
{
     setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(230,195,13);

   floodfill(230,195,WHITE);
      setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(230,225,13);

   floodfill(230,225,WHITE);
     setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(230,255,13);

   floodfill(230,255,WHITE);
     setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(260,225,13);

   floodfill(260,225,WHITE);
      setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(197,225,13);

   floodfill(197,225,WHITE);





}
else
{
      setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(255,195,13);

   floodfill(255,195,WHITE);
      setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(255,225,13);

   floodfill(255,225,WHITE);
     setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(255,255,13);

   floodfill(255,255,WHITE);
     setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(195,195,13);

   floodfill(195,195,WHITE);
      setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(195,225,13);

   floodfill(195,225,WHITE);


    setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(195,255,13);

   floodfill(195,255,WHITE);



}
}
