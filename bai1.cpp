#include <iostream>
#include <math.h>
using namespace std;
double khaican(double x)
{
	return sqrt(x);
}
int main()
{
	int a;
	char ch;
	do
	{	
		int a;
		cout<<"enter a value:";
		cin>>a;
		cout<<"square root of "<<a<<" is :"<<khaican(a)<<endl;
		cout<<"continue? (y/n)"<<endl;
		cin>>ch;
	}while(ch != 'n');
	return 0 ;
}
