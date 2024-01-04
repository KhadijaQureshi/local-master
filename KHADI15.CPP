#include<iostream.h>
#include<conio.h>
class nine
{
private:
int days,year,weeks;

public:
void setdata(float x)
{
days=x;
}

void cal()
{
year=(days/365);
weeks=(days%365)/7;
days=days-((year*365)+(weeks*7));
cout<<year<<" "<<weeks<<" "<<days;
}
};

int main()
{
clrscr();
nine s1;
s1.setdata(16);
s1.cal();
getch();
return 0;
}
