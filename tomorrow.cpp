#include <iostream>
using namespace std;
bool isleapyear(int a){
	if ((a%4==0) && (a%100!=0) || (a%400==0))
			return true;
	else 
		return false;
}
int lastday(int month, int year){
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
			if (isleapyear(year)==true)
				return 29;
			else
				return 28;
		default:
			return -1;
		}
}
void nextday(int day,int month, int year){
	int dayofmonth=lastday(month,year);
	if (day<dayofmonth)
		day=day+1;
	else
	{
		if (day>dayofmonth)
		{
			cout<<"-1"<<endl;
			return;
		}
		else
		{
			if(month<12)
			{
				day=1;
				month=month+1;
			}
			else
			{
				day=1;
				month=1;
				year=year+1;
			}
		}
	}
	cout<<day<<"-"<<month<<"-"<<year<<endl;
}
int main(){	
	int day,month,year;
	int choice;
	char h;
	do
	{
		cout<<"enter day-month-year,please: "<<endl;
		cin>>day>>month>>year;
		nextday(day,month,year);
		cout<<"continue? (y/n)"<<endl;
		cin>>h;
	}while(h !='n');
	return 0;
}
