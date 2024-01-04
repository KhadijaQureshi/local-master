#include<iostream.h>
#include<conio.h>
class third
{
private:
int a,b;

public:
third(int x,int y);
};

third::third(int x,int y)
{
a=x;
b=y;
cout<<a<<" "<<b;
}

int main()
{
clrscr();
third o1(50,37);
getch();
return 0;
}
