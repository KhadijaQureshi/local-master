#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int amt,n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
cout<<"enter amount:";
cin>>amt;
n2000=amt/2000;
amt=amt-n2000*2000;
n500=amt/500;
amt=amt-n500*500;
n200=amt/200;
amt=amt-n200*200;
n100=amt/100;
amt=amt-n100*100;
n50=amt/50;
amt=amt-n50*50;
n20=amt/20;
amt=amt-n20*20;
n10=amt/10;
n5=amt/5;
amt=amt-n5*5;
n2=amt/2;
amt=amt-n2*2;
n1=amt/1;
amt=amt-n1*1;
cout<<"two thousand notes are:"<<n2000<<endl;
cout<<"five hundred notes are:"<<n500<<endl;
cout<<"two hundred notes are:"<<n200<<endl;
cout<<"one hundred notes are:"<<n100<<endl;
cout<<"fifty notes are:"<<n50<<endl;
cout<<"twenty notes are:"<<n20<<endl;
cout<<"ten notes are:"<<n10<<endl;
cout<<"five notes are:"<<n5<<endl;
cout<<"two notes are:"<<n2<<endl;
cout<<"one notes are:"<<n1<<endl;
getch();
return 0;
}