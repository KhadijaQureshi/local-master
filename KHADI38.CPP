#include<iostream.h>
#include<conio.h>
class second
{
private:
int a,b,c,d;
public:
void assign()
{
a=9;
b=8;
c=7;
d=6;
}
void div()
{
int x;
x=a+b/c;
cout<<a<<"+"<<b<<"/"<<c<<"="<<x<<endl;
}
void four()
{
int y;
y=a+b/c-d;
cout<<a<<"+"<<b<<"/"<<c<<"-"<<d<<"="<<y;
}
};

int main()
{
clrscr();
second o1;
o1.assign();
o1.div();
o1.four();
getch();
return 0;
}