#include<iostream.h>
#include<conio.h>
class addition
{
private:
int a,b,c;

public:
void assign()
{
a=20;b=30;
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
addition o1;
o1.assign();
o1.sum();
o1.output();
getch();
return 0;
}