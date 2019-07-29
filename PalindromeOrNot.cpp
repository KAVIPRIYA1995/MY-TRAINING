#include <iostream>
using namespace std;

int main() 
{
	int n,num,digit,rev;
	cin>>n;
	num=n;
	if(n<=1000)
	{
	do
	{
		digit=n%10;
		rev=(rev*10)+digit;
		n=n/10;
	}while(n!=0);
	if(num==rev)
	cout<<"yes";
	else
	cout<<"no";
	}
	else
	cout<<"invalid";
	return 0;
}
