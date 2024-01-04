#include<iostream.h>
#include<conio.h>
class forth
{
private:
float a,b,c,sum,avg;

public:
void input()
{
cout<<"enter the value of a:";
cin>>a;
cout<<"enter the value of b:";
cin>>b;
cout<<"enter the value of c:";
cin>>c;
}

void assign()
{
a=50.0;b=60.0;c=70.0;
}

void setdata(float x,float y,float z)
{
a=x;b=y;c=z;
}

void cal()
{
sum=a+b+c;
avg=sum/3.0;
cout<<"sum number is:"<<sum<<endl;
cout<<"average number is:"<<avg;
}
};

int main()
{
clrscr();
forth s1;
s1.assign();
s1.cal();
cout<<endl;
s1.input();
s1.cal();
cout<<endl;
s1.setdata(58,64,70);
s1.cal();
getch();
return 0;
}