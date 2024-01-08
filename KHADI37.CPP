#include<iostream.h>
#include<conio.h>
class first
{
private:
int a,b;
public:
void assign()
{
a=5;
b=5;
}
void sub()
{
int c;
c=a-b;
cout<<a<<"-"<<b<<"="<<c<<endl;
}
void mul()
{
int d;
d=a*b;
cout<<a<<"*"<<b<<"="<<d;
}
};

int main()
{
clrscr();
first o1;
o1.assign();
o1.sub();
o1.mul();
getch();
return 0;
}