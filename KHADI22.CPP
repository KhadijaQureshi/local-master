#include<iostream.h>
#include<conio.h>
class first
{
private:
int a,b,c;

public:
void assign();
void sum();
void sub();
void mul();
first()
{
a=0;
b=0;
}
};
inline void first::assign()
{
a=6;
b=5;
}
inline void first::sum()
{
c=a+b;
cout<<a<<"+"<<b<<"="<<c<<endl;
}
inline void first::sub()
{
c=a-b;
cout<<a<<"-"<<b<<"="<<c<<endl;
}
inline void first::mul()
{
c=a*b;
cout<<a<<"*"<<b<<"="<<c;
}

int main()
{
clrscr();
first s1;
s1.assign();
s1.sum();
s1.sub();
s1.mul();
getch();
return 0;
}