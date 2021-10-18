//eception handling in user defined function
#include <iostream>
using namespace std;
void fun(int x)
{
	try
	{
		if(x==0)
		throw 1.0;
		else
		if(x>0)
		throw 1.0;
		else
		throw 'x';
	}
	catch(double d)   
	{
		cout<<"the x value should not be zero"<<endl;
	}
	catch(...)   //default catch block
	{
		cout<<"i am catch handler who can handle mutiple exceptions"<<endl;
	}
}
int main()
{
	fun(0);
	fun(4);
	fun(-44);
	return 0;
}
