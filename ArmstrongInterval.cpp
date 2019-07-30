#include <iostream>
using namespace std;

int main() 
{
	int a,b,i,n,d,s;
	cin>>a>>b;
	a=a+1;b=b-1;
	for(i=a;i<=b;i++)
	{
	s=0;n=i;
	for(;n>0;n/=10)
	{
		d=n%10;
		s=s+d*d*d;
	}
	if(s==i)
	{
		cout<<i;
	}
	}
	return 0;
}
