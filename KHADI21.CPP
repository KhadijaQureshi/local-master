#include<iostream.h>
#include<conio.h>
class second
{
private:
int a,b;

public:
void assign();
void sum();
};

void second :: assign()
{
a=5;b=6;
}

void second :: sum()
{
cout<<a+b;
}

int main()
{
clrscr();
second s1;
s1.assign();
s1.sum();
getch();
return 0;
}
