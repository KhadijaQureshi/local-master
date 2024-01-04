#include<iostream.h>
#include<conio.h>
class first
{
private:
int a,b,c;

public:
void sum();
void assign()
{
a=5;
b=6;
}
};
inline void first::sum()
{
c=a+b;
cout<<a<<"+"<<b<<"="<<c;
}

int main()
{
clrscr();
first s1;
s1.assign();
s1.sum();
getch();
return 0;
}