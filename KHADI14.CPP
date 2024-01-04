#include<iostream.h>
#include<conio.h>
#include<math.h>
class eight
{
private:
int a,b,c,qe;

public:
void assign()
{
a=9;b=8;c=7;
}

void input()
{
cout<<"enter the value of a,b,c:";
cin>>a>>b>>c;
}

void setdata(float x,float y,float z)
{
a=x;b=y;c=z;
}

void cal()
{
qe=(-b)+sqrt((b*2)-(4*a*c)/2*a);
cout<<qe;
}
};

int main()
{
clrscr();
eight s1;
s1.assign();
s1.input();
s1.setdata(9,8,7);
s1.cal();
getch();
return 0;
}