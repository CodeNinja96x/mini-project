#include"iostream.h"
#include"conio.h"
#include"graphics.h"
#include"stdio.h"
#include"dos.h"
#include"string.h"
void border();
void about();
void thanku();
class project
{
public:
  int a,i,j,k,l,x,y,x1,y1,cou;
  char e[9],c;
  int n[9],m[9][8],o[72];
  project()
  {
  cou=0;
  }
  void cho();
  void get();
  void convert();
  void draw1();
  void draw2();
  void draw3();
  void draw4();
};

void project::cho()
{

  if(cou==0)
  {
    project::get();
  }
  else{
    clrscr();
     int gdriver = EGA, gmode = EGAHI, errorcode;
 clrscr();
 initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
 setbkcolor(8);
 border();
 setcolor(RED);
 cout<<"\n\n\n\n\n\n\n\n\n\n\n";
 cout<<"                  Do you want to use existing string ("<<e<<")";
 cout<<"\n                  YES: any key NO: n key";
 cout<<"\n                  :";
    cin>>c;
    switch(c)
    {
      case 'y':break;
      case 'n':project::get();
	       break;
    }
    closegraph();
  }
}

void project::get()
{
 int gdriver = EGA, gmode = EGAHI, errorcode;
 clrscr();
 initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
 setbkcolor(11);
 border();
 setcolor(RED);
 rectangle(206,150,417,170);
 cout<<"\n\n\n\n\n\n\n\n\n\n\n";
 cout<<"                            Enter string : ";
 cin>>e;
 a=strlen(e);
 cou=1;
 closegraph();
}

void project::convert()
{
  for(i=0;i<9;i++)
  n[i]=(int)e[i];
  for(k=0;k<9;k++)
  for(j=0;j<8;j++)
  m[k][j]=0;
  for(j=0;j<72;j++)
  o[j]=0;
  for(k=0;k<a;k++)
  {
  for(j=7;j>0;j--)
   {
    m[k][j]=n[k]%2;
    n[k]=n[k]/2;
   }
  }
  int l=0;
   for(k=0;k<a;k++)
  {
  for(j=0;j<8;j++)
   {
    o[l]=m[k][j];
    l++;
   }
  }
}

void project::draw1()
{
int gdriver = EGA, gmode = EGAHI;
initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
setcolor(YELLOW);
border();
outtextxy(16,113,"+5");
line(32,112,32,170);
line(30,167,616,167);
setbkcolor(13);
setcolor(RED);
rectangle(15,90,616,185);
setcolor(BLUE);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n    ";
for(k=0;k<72;k++)
x1=32,y1=167,x=x1,y=y1;
j=0,k=1;
delay(2000);
for(int r=0;r<72;r++)
{
cout<<o[k];
if(o[k] == 1)
{
sound(1000);
delay(100);
nosound();
}
  x=x,y=y,x1=x+4,y1=y;
  line(x,y,x1,y1);
  x=x1+4,y=y1;
  line(x,y,x1,y1);
  delay(100);

  if(o[j]==1 && o[k]==0)
  {
  x1=x,y1=y+25;
  line(x,y,x1,y1);
  x=x1,y=y1+25;
  line(x,y,x1,y1);
  delay(100);
  }

  if(o[j]==0 && o[k]==1)
  {
  x1=x,y1=y-25;
  line(x,y,x1,y1);
  x=x1,y=y1-25;
  line(x,y,x1,y1);
  delay(100);
  }
 j++,k++;
 delay(100);
}
getch();
}

void project::draw2()
{
  int gdriver = EGA, gmode = EGAHI;
  initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
  setcolor(YELLOW);
  border();
  outtextxy(24,113,"+5");
  outtextxy(24,160,"-5");
  line(40,112,40,172);
  line(40,142,618,142);
  setbkcolor(13);
  setcolor(RED);
  rectangle(15,90,620,185);
  setcolor(BLUE);
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n     ";
  x1=40,y1=167,x=x1,y=y1;
  j=0,k=1;
  delay(2000);
  for(int r=0;r<72;r++)
  {
  cout<<o[k];
  if(o[j] == 1)
  {
  sound(1000);
  delay(100);
  nosound();
  }

  if(o[j] == 0)
  {
  sound(2000);
  delay(100);
  nosound();
  }

  x=x,y=y,x1=x+4,y1=y;
  line(x,y,x1,y1);
  x=x1+4,y=y1;
  line(x,y,x1,y1);
  delay(100);

  if(o[j]==1 && o[k]==0)
  {
  x1=x,y1=y+25;
  line(x,y,x1,y1);
  x=x1,y=y1+25;
  line(x,y,x1,y1);
  delay(100);
  }

  if(o[j]==0 && o[k]==1)
  {
  x1=x,y1=y-25;
  line(x,y,x1,y1);
  x=x1,y=y1-25;
  line(x,y,x1,y1);
  delay(100);
  }
 j++,k++;
 delay(100);
}
getch();
}

void project::draw3()
{
  int gdriver = EGA, gmode = EGAHI;
  initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
  setcolor(YELLOW);
  border();
  outtextxy(24,113,"+5");
  outtextxy(24,160,"-5");
  line(40,112,40,170);
  line(40,142,618,142);
  setbkcolor(13);
  setcolor(RED);
  rectangle(23,90,620,185);
  setcolor(BLUE);
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n     ";
  x1=40,y1=167,x=x1,y=y1;
  j=0,k=1;
  delay(2000);
  for(int r=0;r<72;r++)
  {
  cout<<o[k];
    if(o[j] == 1)
    {
    sound(1000);
    delay(100);
    nosound();
    }

    if(o[j] == 0)
    {
    sound(2000);
    delay(100);
    nosound();
    }
	if( o[j]==0)
	{
	  x=x,y=y,x1=x+4,y1=y;
	  line(x,y,x1,y1);
	  delay(100);
	  x=x1,y=y1,x1=x,y1=y-50;
	  line(x,y,x1,y1);
	  delay(100);
	  x=x1+4,y=y1;
	  line(x1,y1,x,y);
	  delay(100);
	}

	if(o[j]==1)
	{
	  x=x,y=y,x1=x+4,y1=y;
	  line(x,y,x1,y1);
	  delay(100);
	  x=x1,y=y1,x1=x,y1=y+50;
	  line(x,y,x1,y1);
	  delay(100);
	  x=x1+4,y=y1;
	  line(x1,y1,x,y);
	  delay(100);
	}
	if(o[j]== 1 && o[k]==1)
	{
	  x1=x,y1=y,x=x1,y=y-50;
	  line(x1,y1,x,y);
	  delay(100);
	}
	if(o[j]== 0 && o[k]==0)
	{
	  x1=x,y1=y,x=x,y=y1+50;
	  line(x1,y1,x,y);
	  delay(100);
	}
	j++;
	k++;
	delay(100);
  }
  getch();
}

void project::draw4()
{
  int gdriver = EGA, gmode = EGAHI;
  initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
  setcolor(YELLOW);
  border();
  outtextxy(24,113,"+5");
  outtextxy(24,160,"-5");
  line(40,112,40,170);
  line(40,142,618,142);
  setbkcolor(13);
  setcolor(RED);
  rectangle(15,90,620,185);
  setcolor(BLUE);
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n     ";
  x1=40,y1=142,x=x1,y=y1;
  j=0,k=1;
  int count=0;
  delay(2000);
  for(int r=0;r<72;r++)
  {
  cout<<o[k];
   if(count == 0)
   {
     if(o[j]==0)
     {
      x=x1,y=y1,x1=x+8,y1=y;
      line(x,y,x1,y1);
      delay(100);
     }
     if(o[j]==1)
     {
      sound(1000);
      delay(100);
      nosound();
     x=x1,y=y1,x1=x,y1=y-25;
     line(x,y,x1,y1);
     delay(100);
     x=x1,y=y1,x1=x+8,y1=y;
     line(x,y,x1,y1);
     delay(100);
     x=x1,y=y1,x1=x,y1=y+25;
     line(x,y,x1,y1);
     delay(100);
     count=1;
     }

   }
  else
   {
     if(o[j]==0)
     {
     x=x1,y=y1,x1=x+8,y1=y;
     line(x,y,x1,y1);
     delay(100);
     }
     if(o[j]==1)
     {
     count=0;
     sound(2000);
     delay(100);
     nosound();
     x=x1,y=y1,x1=x,y1=y+25;
      line(x,y,x1,y1);
       delay(100);
     x=x1,y=y1,x1=x+8,y1=y;
      line(x,y,x1,y1);
       delay(100);
     x=x1,y=y1,x1=x,y1=y-25;
      line(x,y,x1,y1);
       delay(100);

     }

   }
 j++;
 delay(100);
}
getch();
}

void about()
{
  char msg[80];
  int gdriver = EGA, gmode = EGAHI, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
  setbkcolor(15);
  border();
  setcolor(RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
  outtextxy(50,20, "Tatyasaheb Kore College Of Engineering & Technology");
  outtextxy(200,45,"Department Of CSE");
  setcolor(1);
  int h=getmaxy() - 35;
  int k=10;
  for(int b=0;b<77;b++)
  {
   outtextxy(k,h,"=");
   k+=8;
   delay(100);
       }
     // delay(2500);
  closegraph();
}

void thanku()
{
  int a,b;
  char msg[80];
  int gdriver = EGA, gmode = EGAHI, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
  setbkcolor(6);
  border();
  a = getmaxx() / 2;
  a=a-100;
  b = getmaxy() / 2;
  b=b-50;
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
      outtextxy(a, b, "Thank YOU !");
      delay(2500);
  closegraph();
}
void border()
{
 setcolor(RED);
 int  left = 10;
 int  top = 10;
 int  right = getmaxx()-10;
 int  bottom = getmaxy()-15;
 rectangle(left,top,right,bottom);
 setcolor(1);
 circle(15,341,8)   ;
 outtextxy(12,338,"C Friends (mini project)2016");
 setcolor(YELLOW);
}
int main()
{
about();
  char h;
  project cpp;
do {
  clrscr();
  int gdriver = EGA, gmode = EGAHI, errorcode;
 initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
 setbkcolor(5);
 border();
  cout<<"\n\n\n\n\n\n\n";
  cout<<"\n                              |=====================|";
  cout<<"\n                              ||   1 : UNIPOLAR    ||";
  cout<<"\n                              ||   2 : POLAR NRZ   ||";
  cout<<"\n                              ||   3 : MANCHESTER  ||";
  cout<<"\n                              ||   4 : AMI         ||";
  cout<<"\n                              ||   0 : Exit        ||";
  cout<<"\n                               `===================='";
  cout<<"\n\n                                   Enter Choice : ";
  cin>>h;
  switch (h) {
    case '1':cpp.cho();
     cpp.convert();
     cpp.draw1();
     closegraph();
     break;
    case '2':cpp.cho();
     cpp.convert();
     cpp.draw2();
     closegraph();
     break;

    case '3':cpp.cho();
     cpp.convert();
     cpp.draw3();
     closegraph();
     break;

    case '4':cpp.cho();
     cpp.convert();
     cpp.draw4();
     closegraph();
     break;

    case '0' :
	      break;

    default:
	  cout<<"\nEnter correct choice.....\n";
	  break;
  }
  closegraph();
} while(h != '0');
thanku();
  return 0;
}
