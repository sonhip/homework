#include <iostream>
using namespace std;
bool namnhuan(int a)
{
	if ((a%4==0) && (a%100!=0) || (a%400==0))
			return true;
	else 
		return false;
}
int day( int month, int year)
{
	if ((month==1) || (month==3) || (month==5) || (month==7) || (month==8) || (month==12) || (month==10))
		return 31;
	if ((month==4) || (month==6) || (month==9) || (month==11))
		return 30;
	else
	{
		if(namnhuan(year)==true && (month==2))
			return 29;
		else 
			return 28;
	}
}
int main()
{
	char h;
	do
	{
		int month,year;
		cout<<"enter month year: ";
		cin>>month>>year;
		cout <<"days in month: "<<day(month,year)<<endl;
		cout<<"continue? (y/n): ";
		char h;
		cin>>h;
	}while(h != 'n');
}