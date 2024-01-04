#include<iostream.h>
#include<conio.h>
class five
{
private:
int a,b,c;

public:
void assign();
int sum();
int sub();
int mul();
five()
{
a=0;
b=0;
}
};
inline void five::assign()
{
a=9;
b=8;
}
inline int five::sum()
{
return(a+b);
}
inline int five::sub()
{
return(a-b);
}
inline int five::mul()
{
return(a*b);
}

int main()
{
clrscr();
int r1,r2,r3;
five o1;
o1.assign();
r1=o1.sum();
cout<<r1<<endl;
r2=o1.sub();
cout<<r2<<endl;
r3=o1.mul();
cout<<r3;
getch();
return 0;
}













