#include<iostream.h>
#include<conio.h>
class third
{
private:
int a,b,c;

public:
void setdata(int x,int y)
{
a=x;b=y;
}

void mul()
{
c=a*b;
}

void output()
{
cout<<a<<"*"<<b<<"="<<c;
}
};

int main()
{
clrscr();
third s1;
s1.setdata(5,6);
s1.mul();
s1.output();
getch();
return 0;
}