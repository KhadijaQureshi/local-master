#include<iostream.h>
#include<conio.h>
class first
{
private:
int a,b,c;

public:
void assign()
{
a=10;b=20;
}

void sum()
{
c=a+b;
}

void output()
{
cout<<a<<"+"<<b<<"="<<c;
}
};

int main()
{
clrscr();
first s1;
s1.assign();
s1.sum();
s1.output();
getch();
return 0;
}