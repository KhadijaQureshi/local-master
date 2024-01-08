#include<iostream.h>
#include<conio.h>
#include<math.h>
class five
{
private:
float a,b,r;
public:
void assign()
{
a=9;
b=5;
}
void square()
{
r=sqrt((a*a)-(b*b));
cout<<"sqrt(("<<a<<"*"<<a<<")-("<<b<<"*"<<b<<"))="<<r;
}
};

int main()
{
clrscr();
five o1;
o1.assign();
o1.square();
getch();
return 0;
}