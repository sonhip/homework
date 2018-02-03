#include <iostream>
using namespace std;
bool namnhuan(int a)
{
	if ((a%4==0) && (a%100!=0) || (a%400==0))
			return true;
	else 
		return false;
}
int main()
{
	char h;
	do
	{
		int a;
		char h;
		cout<<"enter a year value: "<<endl;
		cin>>a;
		if (namnhuan(a)==true)
			cout<<a<<" is a leap year "<<endl;
		else
			cout<<a<<" is not a leap year"<<endl;
		cout<<"continue? (y/n)"<<endl;
		cin>>h;
	}while (h != 'n');
	return 0;
}