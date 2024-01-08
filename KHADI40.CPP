#include<iostream.h>
#include<conio.h>
class four
{
private:
int p,r,t;
public:
void assign()
{
p=9;
r=6;
t=4;
}
void uttara()
{
int si;
si=p*r*t/100;
cout<<p<<"*"<<r<<"*"<<t<<"/"<<"100"<<"="<<si;
}
};

int main()
{
clrscr();
four o1;
o1.assign();
o1.uttara();
getch();
return 0;
}